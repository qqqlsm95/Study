using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Ch4_Array_List.Program;

namespace GiftBoxNamespace
{
    class GiftBox
    {
        public char CharLetter = '친';
        public string Letter = "친구야 잘지내니?";

        public int Money = 1000000;                 // 4byte
        public long LongMoney = 1000000000;         // 8byte

        public float FloatMoney = 100000.0f;        // 4byte
        public double DoubleMoney = 10000000.0d;    // 8byte


        public ITEM_GRADE Grade;   // 유니크, 레어, 노멀
    }
}
