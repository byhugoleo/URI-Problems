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
        public struct churras {
        //Properties/Variables
            public string meat { get; set; }
            public int validity { get; set; }
        
        //Methods
            public override string ToString() {
                return meat;
            }
        };

        static int mycomparator(churras a, churras b)
        {
            if (a.validity < b.validity)
                return -1;
            else
                return (a.validity == b.validity ? 0 : 1); 
        }

        static void Main(string[] args)
        {
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            string[] input;
            string values = Console.ReadLine();
            int n;
            churras[] C = new churras[10];
            while (values != null) {
                input = values.Split(' ');
                n = Int32.Parse(input[0]);
                Array.Resize(ref C, n);
                for (int i = 0; i < n; i++) {
                    input = Console.ReadLine().Split(' ');
                    C[i].meat = input[0];
                    C[i].validity = Int32.Parse(input[1]);
                }
                Array.Sort(C, mycomparator);
                for (int i = 0; i < n; i++)
                    Console.Write(C[i].ToString() + ((i == n - 1) ? "\n" : " "));
                values = Console.ReadLine();
            }
        }
    }
}
