namespace Minimal.WebApi
{
    using Northwind.Common;
    public class Program
    {
        public static void Main(string[] args)
        {
            var builder = WebApplication.CreateBuilder(args);

            builder.WebHost.UseUrls("https://localhost:5003");

            builder.Services.AddCors();

            // Add services to the container.
            builder.Services.AddRazorPages();            

            var app = builder.Build();

            // only alllow the MVC client and only GET requests
            app.UseCors(configurePolicy: options =>
            {
                options.WithMethods("GET");
                options.WithOrigins("https://localhost:5001");
            });

            app.MapGet("/api/weather", () =>
            {
                return Enumerable.Range(1, 5).Select(index =>
                new WeatherForecast
                {
                    Date = DateTime.Now.AddDays(index),
                    TemperatureC = Random.Shared.Next(-20, 55),
                    Summary = WeatherForecast.Summaries[
                    Random.Shared.Next(WeatherForecast.Summaries.Length)]
                })
                .ToArray();
            });

            // Configure the HTTP request pipeline.
            if (!app.Environment.IsDevelopment())
            {
                app.UseExceptionHandler("/Error");
                // The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
                app.UseHsts();
            }

            app.UseHttpsRedirection();
            app.UseStaticFiles();

            app.UseRouting();

            app.UseAuthorization();

            app.MapRazorPages();

            app.Run();
        }
    }
}