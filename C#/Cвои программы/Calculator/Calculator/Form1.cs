using System;
using System.Windows.Forms;

namespace Calculator
{
    public partial class FormCalculator : Form
    {
        public FormCalculator()
        {
            InitializeComponent();
            labelSymbol.Text = "";
            Text = "Calculator";
        }
        private static double result;
        private static string staticNumberFirst = "";
        private static string staticNumberSecond = "";
        private enum operationSymbol { ZERO, PLUS, MINUS, MULTIPLY, DIVIDE, REMAINDER };
        private static operationSymbol symbol = operationSymbol.ZERO;
        private static bool IndicComma = false;
        private static bool IndicSymbol = false;
        private static string Firstlable = "";

        //Числа
        private void but1_Click(object sender, EventArgs e)
        {
            butX("1");
        }
        private void but2_Click(object sender, EventArgs e)
        {
            butX("2");
        }
        private void but3_Click(object sender, EventArgs e)
        {
            butX("3");
        }
        private void but4_Click(object sender, EventArgs e)
        {
            butX("4");
        }
        private void but5_Click(object sender, EventArgs e)
        {
            butX("5");
        }
        private void but6_Click(object sender, EventArgs e)
        {
            butX("6");
        }
        private void but7_Click(object sender, EventArgs e)
        {
            butX("7");
        }
        private void but8_Click(object sender, EventArgs e)
        {
            butX("8");
        }
        private void but9_Click(object sender, EventArgs e)
        {
            butX("9");
        }
        private void but0_Click(object sender, EventArgs e)
        {
            butX("0");
        }

        //Знаки
        private void butPluse_Click(object sender, EventArgs e)
        {
            butcheckOperationSymbol('+', operationSymbol.PLUS);
        }
        private void butMinus_Click(object sender, EventArgs e)
        {
            butcheckOperationSymbol('-', operationSymbol.MINUS);
        }
        private void butMul_Click(object sender, EventArgs e)
        {
            butcheckOperationSymbol('*', operationSymbol.MULTIPLY);
        }
        private void butDiv_Click(object sender, EventArgs e)
        {
            butcheckOperationSymbol('/', operationSymbol.DIVIDE);
        }
        private void butRem_Click(object sender, EventArgs e)
        {
            butcheckOperationSymbol('%', operationSymbol.REMAINDER);
        }

        //Чистка
        private void butC_Click(object sender, EventArgs e)
        {
            staticNumberFirst = "0";
            staticNumberSecond = "0";
            IndicComma = false;
            IndicSymbol = false;
            symbol = operationSymbol.ZERO;

            labelSymbol.Text = "";
            label.Text = "0";
        }

        //Запятая
        private void butCom_Click(object sender, EventArgs e)
        {
            if (IndicComma == false)
            {
                label.Text = label.Text + ",";

                IndicComma = true;
            }
        }

        //Стереть
        private void butWip_Click(object sender, EventArgs e)
        {
            if (label.Text != "0")
            {
                label.Text = label.Text.Remove(label.Text.Length - 1, 1);
            }
            if(label.Text == "")
            {
                label.Text = "0";
            }
        }

        //Смена знака
        private void butSign_Click(object sender, EventArgs e)
        {
            if(label.Text != "0")
            {
                if (label.Text[0] == '-')
                {
                    label.Text = label.Text.Remove(0, 1);
                }
                else
                {
                    label.Text = "-" + label.Text;
                }
            }
        }

        //Равенство
        private void butRes_Click(object sender, EventArgs e)
        {
            if (IndicSymbol == true || staticNumberSecond != "")
            {
                switch (symbol)
                {
                    case operationSymbol.PLUS: butOperationSymbol('+'); break;
                    case operationSymbol.MINUS: butOperationSymbol('-'); break;
                    case operationSymbol.DIVIDE: butOperationSymbol('/'); break;
                    case operationSymbol.MULTIPLY: butOperationSymbol('*'); break;
                    case operationSymbol.REMAINDER: butOperationSymbol('%'); break;
                }
            }
        }

        //Шалоны ->
        private void butX(string stringX)
        {
            if (symbol == 0)
            {
                if (label.Text == "0")
                {
                    label.Text = stringX;
                    staticNumberFirst = label.Text;
                }
                else
                {
                    label.Text = label.Text + stringX;
                    staticNumberFirst = label.Text;
                }
            }
            else
            {
                if (IndicSymbol == true)
                {
                    IndicComma = false;
                    IndicSymbol = false;
                    label.Text = "0";
                }
                if (label.Text == "0")
                {
                    label.Text = stringX;
                    staticNumberSecond = label.Text;
                }
                else
                {
                    label.Text = label.Text + stringX;
                    staticNumberSecond = label.Text;
                }
            }
        }
        private void butSymbol(char symbolX, operationSymbol s)
        {
            IndicSymbol = true;
            symbol = s;
            labelSymbol.Text = staticNumberFirst + " " + symbolX;

            if (label.Text.Remove(label.Text.Length - 1) == ",")
            {
                label.Text = label.Text.Remove(label.Text.Length - 1);
            }

            ////
        }
        private void butOperationSymbol(char charSymbol)
        {  
            switch (charSymbol)
            {
                case '+': result = Convert.ToDouble(staticNumberFirst) + Convert.ToDouble(staticNumberSecond); break;
                case '-': result = Convert.ToDouble(staticNumberFirst) - Convert.ToDouble(staticNumberSecond); break;
                case '*': result = Convert.ToDouble(staticNumberFirst) * Convert.ToDouble(staticNumberSecond); break;
                case '/': result = Convert.ToDouble(staticNumberFirst) / Convert.ToDouble(staticNumberSecond); break;
                case '%': result = (Convert.ToDouble(staticNumberFirst) * 100) / Convert.ToDouble(staticNumberSecond); break;
            }
            staticNumberSecond = "";
            staticNumberFirst = result.ToString();
            label.Text = staticNumberFirst;
            labelSymbol.Text = "";
        }
        private void butcheckOperationSymbol(char s, operationSymbol operation)
        {
            if (IndicSymbol == true || staticNumberSecond != "")
            {
                butOperationSymbol(s);
                butSymbol(s, operation);
            }
            else
            {
                butSymbol(s, operation);
            }
        }
    }
}