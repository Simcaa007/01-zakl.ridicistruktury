using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _09
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double soucet = 0;
            int pocet = 0;
            foreach (Control c in groupBox1.Controls)
            {
                if(c is TextBox)
                {
                    int cislo = int.Parse(c.Text);
                    soucet += cislo;
                    pocet++;
                }
                else if(c is Label)
                {
                    c.Text = listBox1.SelectedItem.ToString();
                }
            }
            double prumer = Math.Round(soucet / pocet, 2);
            MessageBox.Show($"Prumer je : {prumer}");
        }

        /*
           VYSVETLENI: foreach je v tomto případě vhodný, 
           protože tvým cílem je pouze "posbírat" data 
           ze všech prvků určitého typu bez ohledu na jejich pozici
         */

    }
}
