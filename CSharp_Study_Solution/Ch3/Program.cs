using System;

namespace Ch3
{

    class GiftBox
    {
        public string Letter;
        public int Money;
    }

    internal class Program
    {
        // Method (함수)
        // 1. 정리하기 위해, 2. 반복을 단순화 
        static void Main(string[] args)
        {
            Console.WriteLine("시작 부분");

            // 인스턴스 생성
            GiftBox a = new GiftBox()
            {
                Letter = "잘지내니?",
                Money = 1000000,
            };

            Console.WriteLine("A송장 내용 2578");
            Console.WriteLine(a.Letter);
            Console.WriteLine(a.Money);


            // 송장을 전달 (주소 복사)
            GiftBox b = a;

            Console.WriteLine("B기사님 송장 내용 2578");
            Console.WriteLine(b.Letter);
            Console.WriteLine(b.Money);

            // A 유저가 내용을 변경 함
            a.Letter = "어떻게 지내고 있어?";
            a.Money = 15000000;

            Console.WriteLine("B기사님 송장 내용 2578");
            Console.WriteLine(b.Letter);
            Console.WriteLine(b.Money);

            // 인스턴스 생성
            AddressA();
            AddressB();

            GiftBox AddressC = GiftBoxMaker("C친구야 잘지내니?", 1600000);
        }

        static void AddressA()
        {
            // 인스턴스 생성
            GiftBox addressA = new GiftBox()
            {
                Letter = "A친구야 잘지내니?",
                Money = 1100000,
            };
        }

        static void AddressB()
        {
            // 인스턴스 생성
            GiftBox addressB = new GiftBox()
            {
                Letter = "B친구야 잘지내니?",
                Money = 1200000,
            };
        }

        static GiftBox GiftBoxMaker(string letter, int money)
        {
            // 인스턴스 생성
            GiftBox address = new GiftBox()
            {
                Letter = letter,
                Money = money,
            };

            return address; // 여기서 중단, 값 반환
        }
    }
}
