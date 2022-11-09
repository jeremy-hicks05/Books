namespace AspNetCoreVideo.Entities
{
    using AspNetCoreVideo.Models;
    using System.ComponentModel.DataAnnotations;
    public class Video
    {
        public int Id { get; set; }

        [Required, MinLength(3), MaxLength(80)]
        //[DataType(DataType.Password)]
        public string Title { get; set; }
        //public int GenreId { get; set; }

        [Display(Name ="Film Genre")]
        public Genres Genre { get; set; }
    }
}
