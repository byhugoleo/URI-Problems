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
        const double pi = 3.14159;
        static void Main(string[] args)
        {
            // Console.SetIn(new StreamReader(@"C:\\Users\\hugol\\Projects\\code.in"));
            double r = Double.Parse(Console.ReadLine());
            Console.WriteLine("A={0}", (pi * r * r).ToString("F4"));
        }
    }
}