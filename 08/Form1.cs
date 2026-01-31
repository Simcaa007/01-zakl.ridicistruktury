using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _08
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string vys = "";
            foreach(string line in textBox1.Lines)
            {
                if (checkBox1.Checked && checkBox2.Checked)
                {
                    vys += line.Substring(0, 1).ToUpper() + line.Substring(1, line.Length - 1) + "." + Environment.NewLine;
                }
                else if (checkBox1.Checked) {
                    vys += line.Substring(0, 1).ToUpper() + line.Substring(1, line.Length - 1) + Environment.NewLine;
                }
                else if (checkBox2.Checked)
                {
                    vys += line + Environment.NewLine;
                }
            }

            textBox1.Clear();

            textBox1.Text = vys;
        }
    }
}
