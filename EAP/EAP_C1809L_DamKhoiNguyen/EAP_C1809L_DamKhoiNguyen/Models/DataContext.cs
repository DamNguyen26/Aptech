using System.Data.Entity;

namespace EAP_C1809L_DamKhoiNguyen.Models
{
    public class DataContext : DbContext
    {
        public virtual DbSet<Genre> Genres { get; set; }
        public virtual DbSet<Album> Albums { get; set; }
        public DataContext() : base("DataContext")
        {
            Database.SetInitializer<DataContext>(new DataInitializer());
        }
    }
}