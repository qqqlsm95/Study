using System.Collections;

namespace Ch7_Operator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("시작 부분");

            // Binary
            // 0001 == 1
            // 0010 == 2
            // 0011 == 3
            // 0100 == 4
            // 1111 == 15 == F
            // 1111 1111 == 0 ~ 255 == FF, 1byte

            int value = 128; // 4byte
            // 0000 0000 0000 0000 0000 0000 1000 0000

            BitArray bitArray = new BitArray(8);
            // 00000000
            bitArray[0] = true;
            bitArray[1] = true;
            bitArray[2] = false;
            bitArray[3] = true;
            bitArray[4] = true;
            bitArray[5] = false;
            bitArray[6] = true;
            bitArray[7] = false;

        }
    }
}
