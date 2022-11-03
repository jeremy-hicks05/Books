using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace Packt.Shared
{
    using Microsoft.EntityFrameworkCore; // UseSqlite
    using Microsoft.Extensions.DependencyInjection; // IServiceCollection
    using static System.Reflection.Metadata.BlobBuilder;

    public static class NorthwindContextExtensions
    {
        public static IServiceCollection AddNorthwindContext(
            this IServiceCollection services, string relativePath = "..")
        {
            string databasePath = Path.Combine(relativePath, "Northwind.db");

            services.AddDbContext<NorthwindContext>(
                options => options.UseSqlite($"Data Source={databasePath}")
            );

            return services;
        }

    }
}
