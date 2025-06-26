using GiftBoxNamespace;

namespace Ch8_Exception
{
    internal class Program
    {
        static GiftBox giftBox;
        static void Main(string[] args)
        {
            Console.WriteLine("시작 부분");

            // try catch

            try 
            {
                Console.WriteLine("레터 출력하는 부분");
                Console.WriteLine(giftBox.Letter);
            }
            catch (NullReferenceException e)
            {
                Console.WriteLine("NullReferenceException e:");
                Console.WriteLine(e);
            }
            catch (Exception e)
            {
                Console.WriteLine("Exception e:");
                Console.WriteLine(e);
            }
            finally
            {
                Console.WriteLine("무조건 실행");
            }

            Console.WriteLine("종료");
        }
    }
}
