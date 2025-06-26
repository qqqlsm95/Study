namespace Ch9_Method
{
    internal class Program
    {
        // overloading
        private void PrintMoney(int money)
        {
            Console.WriteLine(money);
        }

        private void PrintMoney(string money)
        {
            Console.WriteLine(money);
        }

        private int money;

        public int Money
        {
            get
            {
                return money;
            }
            set
            {
                money = value * 10000;
                PrintMoney(money);
            }
        }


        class ActorA
        { 
            public void Action()
            {
                Console.WriteLine("A가 포옹한다.");
            }
        }

        class ActorB
        {
            public void Action(Action<string> action)
            {
                Console.WriteLine("B가 포옹한다.");
                action.Invoke("나 액션 끝났어.");
            }
        }

        class Camera
        {
            public void Pickupcamera()
            {
                Console.WriteLine("카메라를 든다.");
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("시작 부분");

            // 가변 파라미터 (params), 선택적 인수, 명명된 인수

            // 1. 가변 파라미터 (params)
            string.Format("Money: {0}, Name: {1}, Etc: {2}, Add: {3}", 3000, "민수", "기타사항", "추가");
            PrintPopup("메세지1", "메세지2");


            // 2. 선택적 인수
            PrintPopup2("제목1", "내용1", "기타1");

            // 3. 명명된 인수
            // 가독성 향상
            PrintPopup2(title: "제목", message: "OK", etc: "기타");


            // 대리자 (Delegate, Action)
            new ActorA().Action();
            new ActorB().Action(CameraPickup);

        }

        static void PrintPopup(string message)
        {
            Console.WriteLine(message);
        }

        static void PrintPopup(params string[] message)
        {
            foreach (string item in message)
            {
                Console.WriteLine(item);
            }
        }


       static void PrintPopup2(string title, string message, string etc, string type = "type3")
        {
            Console.WriteLine(title);
            Console.WriteLine(message);
        }

        static void CameraPickup(string actorMessage)
        {
            Console.WriteLine("카메라 감독이 받는 메세지:" + actorMessage);
            Camera camera = new Camera();
            camera.Pickupcamera();
        }
    }

}
