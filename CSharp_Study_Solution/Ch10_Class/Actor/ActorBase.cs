using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal class ActorBase
    {
        public string Name { get; protected set; }

        public static string Description;

        public static void PrintDescription()
        {
            Console.WriteLine(Description);
        }

        public ActorBase(string name)
        {
            Name = name;
        }

        public virtual void AddName(string value)
        {
            this.Name = Name + value;
        }
    }
}
