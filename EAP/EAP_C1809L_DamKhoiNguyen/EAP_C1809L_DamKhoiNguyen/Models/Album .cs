using System.ComponentModel.DataAnnotations;

namespace EAP_C1809L_DamKhoiNguyen.Models
{
    public class Album
    {
        public int AlbumId { get; set; }

        [Required(ErrorMessage = "{0} is required!")]
        [StringLength(32, ErrorMessage = "{0} length must be from {2} to {1}", MinimumLength = 3)]
        public string Title { get; set; }

        [Required(ErrorMessage = "{0} is required!")]
        [DataType(DataType.Date)]
        public System.DateTime ReleaseDate { get; set; }

        [Required(ErrorMessage = "{0} is required!")]
        public string Artist { get; set; }

        [Required(ErrorMessage = "{0} is required!")]
        [Range(1, 15, ErrorMessage = "{0} must be a number between {1} and {2}.")]
        public double Price { get; set; }
        
        public int GenreId { get; set; }

        [Newtonsoft.Json.JsonIgnore]
        public virtual Genre Genre { get; set; }

    }
}

