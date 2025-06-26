using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal class ExtraActor : ActorBase
    {
        public ExtraActor(string name) : base(name)
        {
        }

        public void MoveOffCamera()
        {
            Console.WriteLine("화면 밖으로 신속하게 이동");
        }
    }
}
