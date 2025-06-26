using Ch10_Class.Actor;
using System.Runtime.CompilerServices;

namespace Ch10_Class
{
    internal class Program
    {
        private static int cameraCount = 10;

        static void Main(string[] args)
        {
            // 1. 생성자(constructor), readonly, 한정자, this.

            ActorA actorA = new ActorA("민수");


            // 2. 상속 overriding
            // 2-1. 상속방법 (공통된 부분을 같이 쓰기 위해 한 클래스로 묶는다)
            // 2-2. override

            ExtraActor extraActor = new ExtraActor(name: "민수");
            MainActor mainActor = new MainActor(name: "철수");

            extraActor.AddName(" 최고");
            mainActor.AddName(" 멋져");

            Console.WriteLine(extraActor.Name);
            Console.WriteLine(mainActor.Name);



            // 3. 상속
            // 3-1. Up, Down Casting
            // 3-2. as is
            // 자식부터 실행 된다.
            ActorBase extraActor1 = new ExtraActor(name: "민수");
            ActorBase mainActor1 = new MainActor(name: "철수");

            extraActor1.AddName("최고");

            extraActor1.MoveOffCamera(); // error 발생, 부모 클래스에서 실행 불가

            ExtraActor downCasting = extraActor1 as ExtraActor;   // 부모 클래스 -> 자식 클래스로 형변환
            if (downCasting != null)
                downCasting.MoveOffCamera();    // == downCasting?.MoveOffCamera()

            ActorManager actorManager = new ActorManager();
            actorManager.actorBases.Add(extraActor1);
            actorManager.actorBases.Add(mainActor1);

            List<ActorBase> actorBases = new List<ActorBase>();
            actorBases.Add(extraActor1);
            actorBases.Add(mainActor1);

            List<ExtraActor> extraActors = actorManager.GetExtraActors();
            foreach (var item in extraActors)
            {
                item.MoveOffCamera();
            }

            List<MainActor> mainActors = actorManager.GetMainActor();
            foreach (var item in mainActors)
            {
                item.MoveInCamera();
            }



            // 4. 의존성 주입(Dependency Injection, DI)
            // config, configuration 파일 (설정 값)
            // 설정을 밖에서 하자.

            ActorManager actorManager1 = new ActorManager(boss: new MainActor(name: "진수"));
            ActorManager actorManager1 = new ActorManager(boss: new MainActor(name: Config.BOSS_NAME));

            new CameraManger().CameraCount(cameraCount);


            // 5. static

            ActorBase.Description = "공통된 변수";
            Console.WriteLine(ActorBase.Description);
            ActorBase.PrintDescription();
        }


    }
}
