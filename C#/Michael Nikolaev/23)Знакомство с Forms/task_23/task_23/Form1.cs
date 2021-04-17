using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace task_23
{
    public partial class WinForm : Form
    {
        public WinForm()
        {
            InitializeComponent();
        }
        
        //событие
        private void but1_Click(object sender, EventArgs e)
        {
            if (Int32.Parse(label1.Text) + Int32.Parse(label2.Text) == Int32.Parse(Box.Text))
            {
                FormYes yes = new FormYes();
                yes.Show();
            }
            else
            {
                FormNo no = new FormNo();
                no.Show();
            }
        }

        private void but2_Click(object sender, EventArgs e)
        {
            Random rnd = new Random();
            label1.Text = (rnd.Next() % 10).ToString(); //Получить очередное случайное число
            label2.Text = (rnd.Next() % 10).ToString();
        }
    }
}
