using System.Collections.Generic;

namespace EAP_C1809L_DamKhoiNguyen.Models
{
    public class Genre
    {
        public int GenreId { get; set; }
        public string GenreName { get; set; }
        public virtual ICollection<Album> Albums { get; set; }
        public Genre() {
            this.Albums = new HashSet<Album>();
        }
    }
}