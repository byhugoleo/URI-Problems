using System;
using System.Collections.Generic;
using System.Text;
using System.Numerics;
using System.Linq;
using System.IO;

namespace ProjectsCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            string[] st = new string[6];
            st = Console.ReadLine().Split(' ');
            int ansC = (Int16.Parse(st[0]) * 3) + Int16.Parse(st[1]);
            int ansF = (Int16.Parse(st[3]) * 3) + Int16.Parse(st[4]);
            int golC = Int16.Parse(st[2]), golF = Int16.Parse(st[5]);
            if ((ansC > ansF) || ((ansC == ansF) && (golC > golF)))
                Console.WriteLine("C");
            else if ((ansC < ansF) || ((ansC == ansF) && (golC < golF)))
                Console.WriteLine("F");
            else
                Console.WriteLine("=");
         }
    }
}

