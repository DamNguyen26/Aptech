using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace Airlines_Reservation.Controllers
{
    public class UserController : Controller
    {
        // GET: User
        public ActionResult Index()
        {
            return View();
        }
        public ActionResult Contact()
        {
            return View();
        }
        public ActionResult About()
        {
            return View();
        }
        public ActionResult Guide()
        {
            return View();
        }

        public ActionResult Conditions()
        {
            ViewBag.Message = "flight booking conditions.";

            return View();
        }
    }
}