using Microsoft.Owin.Hosting;
using Owin_C1809L_DamKhoiNguyen.Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace Owin_C1809L_DamKhoiNguyen
{
    class Program
    {
        static void Main(string[] args)
        {
            string baseAddress = "http://localhost:9000";
            WebApp.Start<Startup>(baseAddress);
            var client = new HttpClient();
            var response = client.GetAsync(baseAddress + "/api/Song").Result;
            Console.WriteLine(response);
            Console.WriteLine(response.Content.ReadAsStringAsync().Result);
            Console.ReadLine();
        }
    }
}
