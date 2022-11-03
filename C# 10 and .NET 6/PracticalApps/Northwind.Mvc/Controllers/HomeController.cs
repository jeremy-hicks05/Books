using Microsoft.AspNetCore.Mvc; // Controller, IActionResult
using Northwind.Mvc.Models; // ErrorViewModel
using System.Diagnostics; // Activity
using Microsoft.AspNetCore.Authorization;
using Packt.Shared;

namespace Northwind.Mvc.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;
        private readonly NorthwindContext db;

        public HomeController(ILogger<HomeController> logger, 
            NorthwindContext injectedContext)
        {
            db = injectedContext;
            _logger = logger;
        }

        public IActionResult Index()
        {
            Console.WriteLine("Calling Index...");
            _logger.LogError("This is a serious error (not really!)");
            _logger.LogWarning("This is your first warning!");
            _logger.LogWarning("Second warning!");
            _logger.LogInformation("I am in the Index method of the HomeController");

            HomeIndexViewModel model = new(
                100, db.Categories.ToList(), 
                db.Products.ToList());
            
            return View(model);
        }

        [Route("private")]
        [Authorize(Roles = "Administrators")]
        public IActionResult Privacy()
        {
            Console.WriteLine("Calling Privacy");
            _logger.LogInformation(View().ViewName);
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}