using System.Runtime.Serialization;
using System.Text;

namespace Ch6_Data_Type
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Contains, Replace, Trim, ToLower, SubString, IndexOf, Split
            string letter = " TO: 친구야 잘 지내니? ";

            bool isContains = letter.Contains("지내");
            Console.WriteLine("isContains" + isContains);

            string replace = letter.Replace("친구", "여진");
            Console.WriteLine("Replace:" + replace);

            // Trim 앞뒤 공백 제거
            string trim = letter.Trim();
            Console.WriteLine("Trim:" + trim);

            string toLower = letter.ToLower();
            Console.WriteLine("toLower:" + toLower);

            // SubString 문자열 잘라내기
            string subString = letter.Substring(0, 3);
            Console.WriteLine("subString:" + subString);

            int indexNum = letter.IndexOf("잘");
            Console.WriteLine("IndexOf:" + indexNum);

            string friends = "여진,민재,호동";
            string[] arrFriend = friends.Split(',');
            foreach(var item in arrFriend)
            {
                Console.WriteLine(item);
            }



            // string.format, toString(), $, +, StringBuilder
            // ㄴ string.format(반올림, 통화 표시, 1의 자리 앞에 0표시, 천의 자리 콤마 표시, 절대 값 표시)

            string name = "민아";
            int point = 3000;

            Console.WriteLine(name + "고객님, 적립금 " + point + "원 있으십니다.");
            Console.WriteLine(string.Format("{0}고객님, 적립금 {1}원 있으십니다.", name, point));
            Console.WriteLine($"{name}고객님, 적립금 {point}원 있으십니다.");

            double sPoint = 234.239;
            Console.WriteLine(Math.Round(sPoint, 2));
            Console.WriteLine(string.Format("{0:C}", sPoint));

            // StringBuilder는 C#에서 문자열을 효율적으로 조작할 수 있도록 설계된 클래스입니다.
            // 문자열을 자주 연결(+)하거나 수정해야 할 경우, StringBuilder를 사용하는 것이 일반적인 문자열(string)보다 훨씬 성능이 좋습니다.
            StringBuilder sb = new StringBuilder();
            sb.Append(name);
            sb.Append("고객님, 적립금 ");
            sb.Append(point.ToString());
            sb.Append("원 있으십니다.");

            Console.WriteLine(sb.ToString());



            // 날짜와 시간 가공
            // Local, Utc, toLocal, toUtc, ToTimeStamp, ToLocal, 원하는 형식 출력, DateTime에 시간 더하기 빼기 등

            // local
            Console.WriteLine("Local: " + DateTime.Now);

            // Utc
            Console.WriteLine("Utc: " + DateTime.UtcNow);

            // toLocal
            DateTime dateTime = DateTime.UtcNow;
            Console.WriteLine("toLocal: " + dateTime.ToLocalTime());

            //toUtc
            Console.WriteLine("toUtc: " + DateTime.Now.ToUniversalTime());

            // ToTimeStamp
            DateTimeOffset dateTimeOffset = DateTimeOffset.UtcNow;
            Console.WriteLine("ToTimeStamp: " + dateTimeOffset.ToUnixTimeSeconds());

            // ToLocal
            Console.WriteLine("ToLocal: " + DateTimeOffset.FromUnixTimeSeconds(dateTimeOffset.ToUnixTimeSeconds()));

            // 원하는 형식 출력
            Console.WriteLine("원하는 형식 출력: " + DateTimeOffset.Now.ToString("yyyy-MM-dd HH:mm:ss z"));
        }
    }
}
