using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TextEditor
{
    interface IMainForm
    {
        string FilePath { get; }
        string Content { get; set; }
        //устанавливает количество символов
        void SetSymbolCount(int count);

        //уведомление формы
        event EventHandler FileOpenClick;
        event EventHandler FileSaveClick;
        event EventHandler ContentChanged;
    }
    public partial class Form1 : Form, IMainForm
    {
        public Form1()
        {
            InitializeComponent();
            butOpenFile.Click += new EventHandler(butOpenFile_Click);
            butSaveFile.Click += butSave_Click;
            fldContent.TextChanged += fldContent_TextChanged;
            butSelectFile.Click += butSelectFile_Click;
            numFont.ValueChanged += numFont_ValueChanged;
        }
        #region Проброс событий
        void butOpenFile_Click(object sender, EventArgs e)
        {
            if(FileOpenClick != null) FileOpenClick(this, EventArgs.Empty);
        }
        void butSave_Click(object sender, EventArgs e)
        {
            if (FileSaveClick != null) FileSaveClick(this, EventArgs.Empty);
        }
        void fldContent_TextChanged(object sender, EventArgs e)
        {
            if (ContentChanged != null) ContentChanged(this, EventArgs.Empty);
        }
        #endregion

        #region IMainForm
        public string FilePath
        {
            get { return fldFilePath.Text; }
        }
        public string Content
        {
            get { return fldContent.Text; }
            set { fldContent.Text = value; }
        }

        public void SetSymbolCount(int count)
        {
            lblSymbolCount.Text = count.ToString();
        }
        public event EventHandler FileOpenClick;
        public event EventHandler FileSaveClick;
        public event EventHandler ContentChanged;
        #endregion

        #region функции формы
        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {

        }
        private void label1_Click(object sender, EventArgs e)
        {

        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private void toolStripStatusLabel3_Click(object sender, EventArgs e)
        {

        }
        #endregion

        //открытие диалогового окна
        private void butSelectFile_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            dlg.Filter = "Текстовый файл|*.txt|Все файлы|*.*";

            if(dlg.ShowDialog() == DialogResult.OK)
            {
                fldFilePath.Text = dlg.FileName;

                if (FileOpenClick != null)
                    FileOpenClick(this, EventArgs.Empty);
            }
        }

        //задание шрифта
        private void numFont_ValueChanged(object sender, EventArgs e)
        {
            fldContent.Font = new Font("Calibri", (float)numFont.Value);
        }
    }
}
