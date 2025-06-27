using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal class ExtraActor2 : IActor
    {
        public ExtraActor2(string name)
        {
        }

        public string Name { get; set; }
        public string Description { get; set; }

        public void AddName(string value)
        {
        }
    }
}
