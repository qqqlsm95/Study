using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal abstract class ActorBase : ICloneable
    {
        // 서브클래스
        public class Info
        {
            public int OptionType { get; private set; }
            public int MoveDirection { get; private set; }

            public Info(int optionType, int moveDirection)
            {
                OptionType = optionType;
                MoveDirection = moveDirection;
            }
        }

        public string Name { get; protected set; }
        public static string Description { get; protected set; };

        public static void PrintDescription()
        {
            Console.WriteLine(Description);
        }

        public ActorBase(string name)
        {
            Name = name;
        }

        public abstract void RemoveName();

        public ActorBase DeepCopy()
        {
            ActorBase actorBase = new ActorBase(Name);
            actorBase.Description = this.Description;
            return actorBase;
        }

        public virtual void AddName(string value)
        {
            this.Name = Name + value;
        }

        public object Clone()
        {
            return this.MemberwiseClone();
        }
    }
}
