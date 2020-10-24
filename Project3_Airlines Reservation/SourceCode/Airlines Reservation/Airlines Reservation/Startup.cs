using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(Airlines_Reservation.Startup))]
namespace Airlines_Reservation
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
