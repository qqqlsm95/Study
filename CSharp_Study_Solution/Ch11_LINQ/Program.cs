namespace Ch11_LINQ
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 링큐(Where, OrderBy, First, Max, Select (class, 익명형식으로 받기))
            List<int> ints = new List<int>();
            ints.Add(1);
            ints.Add(2);
            ints.Add(3);
            ints.Add(4);
            ints.Add(5);
            ints.Add(6); 
            ints.Add(7);
            ints.Add(8);
            ints.Add(9);

            int[] ints1 = new int[2];
            ints1[0] = 1;
            ints1[1] = 2;

            List<int> intNews = new List<int>();
            foreach (var i in ints)
            {
                if (i >= 5)
                    intNews.Add(i);

            }

            // 람다식
            Func<int, bool> func = (int value) => value >= 5;

            ints.Where(CheckOverValue);
            ints.Where(func);

            ints1.Where(v => v >= 5);
        }

        private static bool CheckOverValue(int value)
        {
            return value >= 5;
        }
    }
}
