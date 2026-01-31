using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _07
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
            int n = int.Parse(textBox1.Text);
            bool cisloZIntervalu = false;

            for (int i = 0; i < n; i++)
            {
                int cislo = rnd.Next() % (50 + 10) - 10;
                listBox1.Items.Add(cislo);
            }

            switch (comboBox1.SelectedIndex)
            {
                case 0:
                {
                        foreach (int i in listBox1.Items)
                        {
                            int cislo = i;

                            if (cislo > 20 && cislo <= 25)
                            {
                                cisloZIntervalu = true;
                                MessageBox.Show("Ano, bylo nalezeno cislo z intervalu");
                                break;
                            }
                        }
                }break;
                
                case 1:
                {
                        bool nalezeno = false;
                        for (int i = 0; i < n && !nalezeno; i++)
                        {
                            int cislo = (int)listBox1.Items[i];

                            if (cislo > 20 && cislo <= 25)
                            {
                                cisloZIntervalu = true;
                                nalezeno = true;
                                MessageBox.Show("Ano, bylo nalezeno cislo z intervalu");
                            }
                        }
                }break;
                
                case 2:
                {
                        bool nalezeno = false;
                    while (n > 0)
                    {
                            int cislo = (int)listBox1.Items[n - 1];
                            if (cislo > 20 && cislo <= 25)
                            {
                                cisloZIntervalu = true;
                                nalezeno = true;
                                MessageBox.Show("Ano, bylo nalezeno cislo z intervalu");
                            }
                            n--;
                    }

                }break;
            }
        }
    }
}
