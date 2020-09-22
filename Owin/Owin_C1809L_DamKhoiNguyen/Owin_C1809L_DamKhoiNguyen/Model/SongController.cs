using System.Collections.Generic;
using System.Web.Http;
using System.Net;

namespace Owin_C1809L_DamKhoiNguyen.Model
{
    class SongController : ApiController
    {
        private List<Song> list;
        public SongController()
        {
            this.list = new List<Song>();
            this.list.Add(new Song() { Title = "Hey Jude", Artist = "The Beatles", Price = 1.9 });
            this.list.Add(new Song() { Title = "I Gotta Feeling", Artist = "The Black Eyed Peas", Price = 1.5 });
            this.list.Add(new Song() { Title = "The Twist", Artist = "Chubby Checker", Price = 2 });
        }
        public IHttpActionResult Get()
        {
            return Ok<IList<Song>>(this.list);
        }
        public Song Get(int id)
        {
            var item = this.list[id - 1];
            if (item == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);
            }
            return item;
        }
        public void Post(Song item)
        {
            if (item == null)
            {
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }
            this.list.Add(item);
        }
        public void Put(int id, Song item)
        {
            if (this.list[id - 1] == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);
            }
            if (item == null)
            {
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }
            this.list[id - 1] = item;
        }
        public void Delete(int id)
        {
            this.list.RemoveAt(id - 1);
        }
    }
}
