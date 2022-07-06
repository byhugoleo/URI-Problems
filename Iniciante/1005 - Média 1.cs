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
            double x = Double.Parse(Console.ReadLine());
            double y = Double.Parse(Console.ReadLine());
            Console.WriteLine($"MEDIA = {((x * 3.5 + y * 7.5)/11):F5}");
        }
    }
}