﻿using Microsoft.AspNetCore.Mvc;

namespace Northwind.WebApi.Controllers
{
    using Packt.Shared;
    using Northwind.WebApi.Repositories; // ICustomerRepository
    using System.Linq;

    // base address: api/customers
    [Route("api/[controller]")]
    [ApiController]
    public class CustomersController : ControllerBase
    {
        private readonly ICustomerRepository repo;

        // constructor injects repository registered in Startup
        public CustomersController(ICustomerRepository repo)
        {
            this.repo = repo;
        }

        // GET: api/customers
        // GET: api/customers/?country=[country]
        // this will always return a list of customers (but it might be empty)
        [HttpGet]
        [ProducesResponseType(200, Type= typeof(IEnumerable<Customer>))]
        public async Task<IEnumerable<Customer>> GetCustomers(string? country)
        {
            if(string.IsNullOrWhiteSpace(country))
            {
                return await repo.RetrieveAllAsync();
            }
            else
            {
                return (await repo.RetrieveAllAsync())
                    .Where(customer => customer.Country == country);
            }
        }

        // GET: api/customers/[id]
        [HttpGet("{id}", Name = nameof(GetCustomer))] // named route
        [ProducesResponseType(200, Type = typeof(Customer))]
        [ProducesResponseType(404)]
        public async Task<IActionResult> GetCustomer(string id)
        {
            Customer? c = await repo.RetrieveAsync(id);
            if (c == null)
            {
                return NotFound();
            }
            return Ok(c);
        }

        // POST: api/customers
        // BODY: Customer (JSON, XML)
        [HttpPost]
        [ProducesResponseType(201, Type=typeof(Customer))]
        [ProducesResponseType(400)]
        public async Task<IActionResult> Create([FromBody] Customer c)
        {
            if(c==null)
            {
                return BadRequest(); // 400 Bad request
            }

            Customer? addedCustomer = await repo.CreateAsync(c);

            if(addedCustomer == null)
            {
                return BadRequest("Repository failed to create customer.");
            }
            else
            {
                return CreatedAtRoute( // 201 Created
                    routeName: nameof(GetCustomer),
                    routeValues: new { id = addedCustomer.CustomerId.ToLower() },
                    value: addedCustomer);
            }
        }

        // PUT: api/customers/[id]
        // BODY: Customer (JSON, XML)
        [HttpPut("{id}")]
        [ProducesResponseType(202)]
        [ProducesResponseType(400)]
        [ProducesResponseType(404)]
        public async Task<IActionResult>Update(
            string id, [FromBody] Customer c)
        {
            id = id.ToUpper();
            c.CustomerId = c.CustomerId.ToUpper();

            if(c == null || c.CustomerId != id)
            {
                return BadRequest(); // 400 bad request
            }

            Customer? existing = await repo.RetrieveAsync(id);
            if(existing==null)
            {
                return NotFound();
            }

            await repo.UpdateAsync(id, c);

            return new NoContentResult();  // 204 No content
        }

        // DELETE: api/customers/[id]
        [HttpDelete("{id}")]
        [ProducesResponseType(202)]
        [ProducesResponseType(400)]
        [ProducesResponseType(404)]
        public async Task<IActionResult> Delete(string id)
        {
            if(id=="bad")
            {
                ProblemDetails problemDetails = new()
                {
                    Status = StatusCodes.Status400BadRequest,
                    Type = "https://localhost:5001/customer/failed-to-delete",
                    Title = $"Customer ID {id} found but failed to delete.",
                    Detail = "More details like Company Name, Country, and so on.",
                    Instance = HttpContext.Request.Path
                };
                return BadRequest(problemDetails);
            }
            Customer existing = await repo.RetrieveAsync(id);
            if(existing == null)
            {
                return NotFound();
            }

            bool? deleted = await repo.DeleteAsync(id);

            if(deleted.HasValue && deleted.Value) // short circuit AND
            {
                return new NoContentResult();
            }
            else
            {
                return BadRequest( // 400 Bad Request
                    $"Customer {id} was found but failed to delete.");
            }
        }
    }
}
