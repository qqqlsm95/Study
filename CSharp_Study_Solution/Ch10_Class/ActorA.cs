using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class
{
    internal class ActorA
    {
        // 캡슐화, 은닉화
        //private readonly string name;
        //public readonly string Name;
        //public string Name { get; private set; }
        public string Name { get;  set; }



        // 생성자
        public ActorA(string name)
        {
            // this는 클래스의 멤버 변수 의미
            this.Name = name;
        }

        // 생성자도 overloading 가능
        public ActorA()
        {

        }

        public void SetName(string name)
        {
            this.Name = name;
        }
    }
}
