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
        static void Main(string[] args)
        {
            // Console.SetIn(new StreamReader(@"C:\\Users\\hugol\\Projects\\code.in"));
            int x = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine());
            Console.WriteLine($"PROD = {x * y}");
        }
    }
}