using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task_32
{
    class TestClass
    {
        public event EventHandler onChange;

        private string title;

        public string Title
        {
            get
            {
                return title;
            }
            set
            {
                title = value;
                onChange(this, new EventArgs());
            }
        }
    }
}
