using System;

namespace Solution_Second_Task
{
    internal class Program : Solution
    {
        static void Main(string[] args)
        {
            //FirstTask();
            //SecondTask();
            //ByteSum();


        }
    }
    public class Solution
    {
        public static void FirstTask()
        {
            Console.Clear();

            Console.WriteLine("Enter a positiv number: ");
            string tmp = Console.ReadLine();

            int Answer = tmp.Length;
            Console.WriteLine(" A Length of the positiv number: {0}", Answer);

            Console.WriteLine("The last number of a positiv number: {0}", tmp[Answer - 1]);

            }
        public static void SecondTask()
        {
            Console.Clear();

            Console.WriteLine("Enter a 'A' value: ");
            int a_value = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter a 'B' value: ");
            int b_value = int.Parse(Console.ReadLine());
            int counter = 0;

            for (int i = 100; i < 1000; i++)
            {
                int s = i%10;
                string s1 = b_value.ToString();
                if (s.ToString() == s1)
                {
                    string tmp = i.ToString();

                    int a = int.Parse(tmp[0].ToString());
                    int b = int.Parse(tmp[1].ToString());
                    int c = int.Parse(tmp[2].ToString());
                        if (a + b + c == a_value)
                        {
                            counter++;
                        }
                }
            }
            Console.WriteLine("Number of right tree-digit value {0}", counter.ToString());
        }
        public static void ByteSum()
        {

            Console.WriteLine("Enter a name: ");
            string name = Console.ReadLine();

            Console.WriteLine("Enter a surname: ");
            string surname = Console.ReadLine();

            int n;
            string tail, res = "";

            if (name.Length < surname.Length)
            {
                n = name.Length;
            }
            else
            {
                n = surname.Length;
            }

            for (int i = 0; i < n; i++)
            {
                char tmp_name = name[i];
                char tmp_surname = surname[i];

                res += (char)(tmp_name | tmp_surname);
                Console.WriteLine("Liter of Name {0} + liter of Surname {1}. Result {2}", tmp_name, tmp_surname, res);

            }

            Console.WriteLine("Result of bit add: ",res);
        }
    
    }
}
