namespace AspNetCoreVideo.Services
{
    using AspNetCoreVideo.Entities;
    public class MockVideoData : IVideoData
    {
        private List<Video> _videos;

        public MockVideoData()
        {
            _videos = new List<Video>
            {
                new Video { Id = 1, Genre = Models.Genres.Animated, Title = "Shreck" },
                new Video { Id = 2, Genre = Models.Genres.Animated, Title = "Despicable Me" },
                new Video { Id = 3, Genre = Models.Genres.Animated, Title = "Megamind" }
            };
        }
        public IEnumerable<Video> GetAll()
        {
            return _videos;
        }

        public Video Get(int id)
        {
            return _videos.FirstOrDefault(v => v.Id.Equals(id));
        }

        public void Add(Video newVideo)
        {
            newVideo.Id = _videos.Max(v => v.Id) + 1;
            _videos.Add(newVideo);
        }
    }
}
