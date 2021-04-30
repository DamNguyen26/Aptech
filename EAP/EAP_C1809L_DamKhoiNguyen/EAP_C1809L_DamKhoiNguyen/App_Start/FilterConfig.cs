using System.Web;
using System.Web.Mvc;

namespace EAP_C1809L_DamKhoiNguyen
{
    public class FilterConfig
    {
        public static void RegisterGlobalFilters(GlobalFilterCollection filters)
        {
            filters.Add(new HandleErrorAttribute());
        }
    }
}
