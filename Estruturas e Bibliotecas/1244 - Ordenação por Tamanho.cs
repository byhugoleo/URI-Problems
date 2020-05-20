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
        static string[] counting_sort(string[] arrS)
        {
            int[] count = new int[51];
            string[] ans = new string[50];
            for (int i = 0; i < arrS.Length; i++)
                count[arrS[i].Length]++;
            for (int i = 49; i >= 0; i--)
                count[i] += count[i + 1];
            for (int i = arrS.Length - 1; i >= 0; i--) {
                ans[count[arrS[i].Length] - 1] = arrS[i];
                count[arrS[i].Length]--;  
            }
            return ans;
        }
        static void Main(string[] args)
        {
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            string[] input = new string[50];
            input[0] = Console.ReadLine();
            int t = Int16.Parse(input[0]), cnt;
            for (int i = 0; i < t; i++) {
                input = Console.ReadLine().Split(' ');
                string[] ans = counting_sort(input);
                cnt = 0;
                foreach (string st in ans) {
                    if (cnt == input.Length)
                        break;
                    Console.Write(st + ((++cnt < input.Length) ? " " : ""));
                }
                Console.WriteLine();
            }
        }
    }
}

