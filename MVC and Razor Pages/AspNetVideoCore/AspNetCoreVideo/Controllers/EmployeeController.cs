//using Microsoft.AspNetCore.Components;
using Microsoft.AspNetCore.Mvc;
//using System.Web.Http;

namespace AspNetCoreVideo.Controllers
{
    [Route("company/[controller]/[action]")]
    public class EmployeeController : Controller
    {
        //[]
        public ContentResult Name()
        {
            return Content("Jonas");
        }

        public string Country()
        {
            return "USA";
        }
        //[Route("")]
        //[Route("[action]")]
        public string Index()
        {
            return "Hello from Employee";
        }
    }

    
}
