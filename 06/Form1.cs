using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _06
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random rnd = new Random();
            int n = rnd.Next() % (31000 - 100) + 100;
            string nstring = n.ToString();
            label1.Text = nstring;

            if (radioButton1.Checked)
            {
                int cislo = int.Parse(nstring);
                int soucet = 0;

                while (cislo > 0)
                {
                    int zbytek = cislo % 10;

                    soucet += zbytek;

                    cislo = cislo / 10;
                }
                MessageBox.Show(soucet.ToString());
            }

            else if (radioButton2.Checked)
            {
                int soucet = 0;
                foreach(char ch in nstring)
                {
                    int c = ch - '0';
                    soucet += c;
                }

                MessageBox.Show(soucet.ToString());
            }

            else if(radioButton3.Checked)
            {
                int cislo = int.Parse(nstring);
                int soucet = 0;
                do
                {
                    int zbytek = cislo % 10;
                    soucet += zbytek;
                    cislo = cislo / 10;

                } while (cislo > 0);

                MessageBox.Show(soucet.ToString());
            }
        }
    }
}
