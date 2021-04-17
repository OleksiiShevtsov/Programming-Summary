using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace task_27
{
    public partial class FormCal : Form
    {
        public FormCal()
        {
            InitializeComponent();

            num1.Text = "0";
            num2.Text = "0";
            label.Text = "";
            labelRes.Text = "";
        }

        double res = 0;

        private void butPlus_Click(object sender, EventArgs e)
        {
            symbolRes('+');
        }
        private void butMin_Click(object sender, EventArgs e)
        {
            symbolRes('-');
        }
        private void butDiv_Click(object sender, EventArgs e)
        {
            symbolRes('/');
        }
        private void butMul_Click(object sender, EventArgs e)
        {
            symbolRes('*');
        }

        private void symbolRes(char symbol)
        {
            switch (symbol)
            {
                case '+': res = double.Parse(num1.Text) + double.Parse(num2.Text); break;
                case '-': res = double.Parse(num1.Text) - double.Parse(num2.Text); break;
                case '*': res = double.Parse(num1.Text) * double.Parse(num2.Text); break;
                case '/': res = double.Parse(num1.Text) / double.Parse(num2.Text); break;
            }

            label.Text = symbol.ToString();
            labelRes.Text = "= " + res.ToString();
        }
    }
}
