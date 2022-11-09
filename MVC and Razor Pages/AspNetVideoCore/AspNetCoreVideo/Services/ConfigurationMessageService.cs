namespace AspNetCoreVideo.Services
{
    public class ConfigurationMessageService : IMessageService
    {
        IConfiguration _configuration;
        public ConfigurationMessageService(IConfiguration configuration)
        {
            _configuration = configuration;
        }

        public string GetMessage()
        {
            return _configuration["Message"];
        }
    }
}
