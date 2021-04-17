using System;
using System.Windows.Forms;

namespace task_32
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
       
        private void but1_Click(object sender, EventArgs e)
        {
            TestClass tc = new TestClass();
            tc.onChange += tc_onChange_1;
            tc.Title = "Clicked";
        }

        private void but2_Click(object sender, EventArgs e)
        {
            TestClass tc = new TestClass();
            tc.onChange += tc_onChange_2;
            tc.Title = "Clicked";
        }

        void tc_onChange_1(object sender, EventArgs e)
        {
            MessageBox.Show("event 1");
        }

        void tc_onChange_2(object sender, EventArgs e)
        {
            MessageBox.Show("event 2");
        }
    }
}