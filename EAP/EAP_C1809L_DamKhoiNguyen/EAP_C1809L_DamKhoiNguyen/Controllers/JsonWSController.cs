using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using EAP_C1809L_DamKhoiNguyen.Models;
using Newtonsoft.Json.Linq;
using System.Data.Entity;

namespace EAP_C1809L_DamKhoiNguyen.Controllers
{
    public class JsonWSController : ApiController
    {
        private DataContext db = new DataContext();

        public JToken Get()
        {
            return JToken.FromObject(this.db.Albums.ToList());
        }

        public JToken Get(int id)
        {
            return JToken.FromObject(this.db.Albums.Find(id));
        }
    }
}
