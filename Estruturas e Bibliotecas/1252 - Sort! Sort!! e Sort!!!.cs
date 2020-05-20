using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System.Numerics;
using System.Linq;
using System.IO;

namespace ProjectsCSharp
{
    class Program
    {
        static int m;
        static int modC(int x)
        {
            return ((x < 0) ? -(-x % m) : x % m); 
        }
        static int mycomparator(int x, int y)
        {
            if (modC(x) == modC(y)) {
                if (x == y)
                    return 0;
                if ((x % 2) == 0 && (y & 1) == 1)
                    return 1;
                else if ((x & 1) == 1 && (y % 2) == 0)
                    return -1;
                if ((x & 1) == 1 && (y & 1) == 1)
                    return ((x > y) ? -1 : 1);
                if ((x % 2) == 0 && (y % 2) == 0)
                    return ((x > y) ? 1 : -1); 
            }
            return (modC(x) > modC(y) ? 1 : -1);
        }   
        static void Main(string[] args)
        {
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            string[] input = new string[2];
            int n;
            List<int> x = new List<int>();
            while (true) {
                input = Console.ReadLine().Split(' ');
                n = Int32.Parse(input[0]); m = Int32.Parse(input[1]);
                if (n + m == 0) {
                    Console.WriteLine("0 0");
                    break;
                }
                for (int i = 0; i < n; i++)
                    x.Add(Convert.ToInt32(Console.ReadLine()));
                x.Sort(mycomparator);
                Console.WriteLine(n + " " + m);
                for (int i = 0; i < n; i++)
                    Console.WriteLine(x[i]);
                x.Clear();
            }
        }
    }
}