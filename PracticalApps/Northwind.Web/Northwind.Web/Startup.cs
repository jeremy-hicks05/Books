namespace Northwind.Web
{
    //using Microsoft.EntityFrameworkCore;
    using Packt.Shared; // AddNorthwindContext extension method
    using static System.Console;
    public class Startup
    {
        public void ConfigureServices(IServiceCollection services)
        {
            services.AddRazorPages();
            //services.AddDbContext<NorthwindContext>(
            //    options => { options.UseSqlite($"Data Source=V:\\Books\\C#\\CSharp10Book\\Chapter10\\WorkingWithEFCore\\SQLite\\Northwind.db"); });

            //services.AddNorthwindContext();
            services.AddNorthwindContext(relativePath: ".");
        }

        public void Configure(
            IApplicationBuilder app, IWebHostEnvironment env)
        {
            if(!env.IsDevelopment())
            {
                app.UseHsts();
            }

            app.UseRouting(); // start endpoint routing

            app.Use(async (HttpContext context, Func<Task> next) =>
            {
                RouteEndpoint? rep = context.GetEndpoint() as RouteEndpoint;
                if (rep is not null)
                {
                    WriteLine($"Endpoint name: {rep.DisplayName}");
                    WriteLine($"Endpoint route pattern: {rep.RoutePattern.RawText}");
                }

                if (context.Request.Path == "/bonjour")
                {
                    // in the case of a match on URL path, this becomes a terminating 
                    // delegate that returns so does not call the next delegate
                    await context.Response.WriteAsync("Bonjour Monde!");
                    return;
                }

                // we could modify the request before calling the next delegate
                await next();
                // we could modify the request before calling the next delegate
            });

            app.UseDefaultFiles(); // index.html, default.html, and so on

            app.UseStaticFiles();

            app.UseHttpsRedirection();

            app.UseEndpoints(endpoints =>
            {
                endpoints.MapRazorPages();

                endpoints.MapGet("/hello", () => "Hello World!");
            });
        }
    }
}
