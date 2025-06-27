using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal class MainActor : ActorBase
    {
        public MainActor(string name) : base(name)
        {
        }

        public override void AddName(string value)
        {
            Name = value + Name;
        }

        public void MoveInCamera()
        {
            Console.WriteLine("카메라 안으로 신속하게 이동");
        }

        public override void RemoveName()
        {
            
        }
    }
}
