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
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            int n = Int32.Parse(Console.ReadLine());
            int l, ans;
            string st = String.Empty;
            for (int t = 0; t < n; t++) {
                l = Int32.Parse(Console.ReadLine());
                ans = 0;
                for (int k = 0; k < l; k++) {
                    st = Console.ReadLine();
                    int cnt = 0;
                    foreach (var i in st)
                        ans += (i - 'A') + k + cnt++;
                }
                Console.WriteLine(ans);
            }
        }
    }
}
