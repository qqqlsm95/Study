using GiftBoxNamespace;

namespace Ch5_Reference
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("시작 부분");

            // value type(값 타입), reference type(참조 타입)

            // [Stack]
            // value type
            int aPersonMoney = 10000;
            int bPersonMoney = aPersonMoney;
            aPersonMoney = 20000;

            Console.WriteLine("aPersonMoney" + aPersonMoney);
            Console.WriteLine("bPersonMoney" + bPersonMoney);

            // [Heap] GC
            // reference type
            GiftBox aPersonGiftBox = new GiftBox()
            {
                Letter = "안녕",
                Money = 10000,
            };

            GiftBox bPersonGiftBox = aPersonGiftBox;
            bPersonGiftBox.Money = 20000;
            Console.WriteLine("aPersonMoney" + aPersonGiftBox.Money);
            Console.WriteLine("bPersonMoney" + bPersonGiftBox.Money);


            // string
            string letter = "안녕"; // reference type
            string letter2 = letter;
            letter = "안녕2";

            Console.WriteLine("letter" + letter);
            Console.WriteLine("letter2" + letter2);



            // call by value (값 타입)
            int money = 10000;
            Console.WriteLine("money" + money);
            SetMoney(money);
            Console.WriteLine("money" + money);



            // call by reference (참조 타입)
            GiftBox giftBox = new GiftBox()
            {
                Money = 10000,
            };
            Console.WriteLine(giftBox.Money);
            SetGiftBox(giftBox);
            Console.WriteLine(giftBox.Money);
        }

        static void SetMoney(int needMoney)
        {
            needMoney = 30000;
        }

        static void SetGiftBox(GiftBox info)
        {
            info.Money = 50000;
        }
    }
}
