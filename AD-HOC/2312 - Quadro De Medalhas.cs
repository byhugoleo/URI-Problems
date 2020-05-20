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
        public struct medalsBoard {
         //Propriedades/Variaveis
            public int gold { get; set; }
            public int silver { get; set; }
            public int bronze { get; set; }
            public string country { get; set; }
        //Metodos
            public void setData(int gold, int silver, int bronze, string country) {
                this.gold = gold;
                this.silver = silver;
                this.bronze = bronze;
                this.country = country;
            }
            public override string ToString() {
                return $"{country} {gold} {silver} {bronze}";
            }
        };
        static int mycomparator(medalsBoard a, medalsBoard b)
        {
            if (a.gold > b.gold)
                return -1;
            else if (b.gold > a.gold)
                return 1;
            else if (a.silver > b.silver)
                return -1;
            else if (b.silver > a.silver)
                return 1;
            else if (a.bronze > b.bronze)
                return -1;
            else if (b.bronze > a.bronze)
                return 1;
            return a.country.CompareTo(b.country);
        }
        static void Main(string[] args)
        {
            //Console.SetIn(new StreamReader(@"/home/hugo/projects/code.in"));
            String[] input = Console.ReadLine().Split(' ');
            int t = Int32.Parse(input[0]);
            medalsBoard[] mB = new medalsBoard[t];
            for (int k = 0; k < t; k++) {
                input = Console.ReadLine().Split(' ');
                mB[k].setData(Int32.Parse(input[1]), Int32.Parse(input[2]), Int32.Parse(input[3]), input[0]);
            }
            Array.Sort(mB, mycomparator);
            for (int k = 0; k < t; k++)
                Console.WriteLine(mB[k].ToString());
        }
    }
}