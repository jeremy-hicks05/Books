namespace AspNetCoreVideo.ViewModels
{
    using AspNetCoreVideo.Models;
    using System.ComponentModel.DataAnnotations;

    public class VideoEditViewModel
    {
        public int Id { get; set; }

        [Required, MinLength(3), MaxLength(80)]
        public string Title { get; set; }
        public Genres Genre { get; set; }
    }
}
