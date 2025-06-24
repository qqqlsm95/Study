using System.ComponentModel.DataAnnotations;
using GiftBoxNamespace;
using GiftBoxManagerNamespace;

namespace Ch4_Array_List
{
    class GiftBox
    {
        public char CharLetter = '친';
        public string Letter = "친구야 잘지내니?";
        
        public int Money = 1000000;                 // 4byte
        public long LongMoney = 1000000000;         // 8byte

        public float FloatMoney = 100000.0f;        // 4byte
        public double DoubleMoney = 10000000.0d;    // 8byte
    }

    internal class Program
    {
        private static GiftBox addressA;
        private static GiftBox addressB;
        private static GiftBox addressC;
        private static GiftBox addressD;


        static void Main(string[] args)
        {
            // 생성
            GiftBoxManager giftBoxManager = new GiftBoxManager();
            giftBoxManager.SetInit();

            // 배열
            GiftBox[] giftBoxes = new GiftBox[3];

            giftBoxes[0] = addressA;
            giftBoxes[1] = addressB;
            giftBoxes[2] = addressC;

            GiftBox[] giftBoxes2 = { addressA, addressB, addressC, addressD };
            Console.WriteLine(giftBoxes2.Length);

            // 리스트
            List<GiftBox> giftBoxList = new List<GiftBox>();
            giftBoxList.Add(addressA);
            giftBoxList.Add(addressB);
            giftBoxList.Add(addressC);
            giftBoxList.Add(addressD);

            giftBoxList[0] = addressB;
            giftBoxList[1] = addressA;
                
            //giftBoxList.Clear();             // 리스트 모두 지움
            //giftBoxList.Remove(addressD);    // 지정 지움

            Console.WriteLine(giftBoxList.Count);

            // 수동으로 10만원으로 변경
            giftBoxList[0].Money = 100000;
            giftBoxList[1].Money = 100000;
            giftBoxList[2].Money = 100000;

            // for을 사용해서 10만원으로 변경
            for (int i=0; i<giftBoxList.Count; i++) 
            {
                giftBoxList[i].Money = 100000;
                Console.WriteLine(giftBoxList[i].Letter + " " + giftBoxList[i].Money);
            }

            // foreach
            // var = cpp auto와 같은 변수의 형태 추론
            foreach(var item in giftBoxList)
            {
                item.Money = 100000;
            }


        }


    }

}
