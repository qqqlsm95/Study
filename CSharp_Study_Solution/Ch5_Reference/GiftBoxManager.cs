using GiftBoxNamespace;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GiftBoxManagerNamespace
{
    internal class GiftBoxManager
    {
        // 시작점
        public void SetInit()
        {
            // 선물 생성 3개
            GiftBox addressA = GiftBoxMaker("A친구야 잘지내니?", 100000, ITEM_GRADE.NORMAL);
            GiftBox addressB = GiftBoxMaker("B친구야 잘지내니?", 120000, ITEM_GRADE.UNIQUE);
            GiftBox addressC = GiftBoxMaker("C친구야 잘지내니?", 140000, ITEM_GRADE.NORMAL);
            GiftBox addressD = GiftBoxMaker("D친구야 잘지내니?", 160000, ITEM_GRADE.RARE);
        }

        static GiftBox GiftBoxMaker(string letter, int money, ITEM_GRADE iTEM_GRADE)
        {
            // 인스턴스 생성
            GiftBox address = new GiftBox()
            {
                Letter = letter,
                Money = money,
                Grade = iTEM_GRADE,
            };

            return address; // 여기서 중단, 값 반환
        }
    }


}
