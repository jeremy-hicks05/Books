namespace AspNetCoreVideo.Services
{
    using AspNetCoreVideo.Entities;
    public interface IVideoData
    {
        IEnumerable<Video> GetAll();
        Video Get(int id);
        void Add(Video newVideo);
    }
}
