namespace task_27
{
    partial class FormCal
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.num1 = new System.Windows.Forms.TextBox();
            this.num2 = new System.Windows.Forms.TextBox();
            this.butPlus = new System.Windows.Forms.Button();
            this.butMin = new System.Windows.Forms.Button();
            this.butDiv = new System.Windows.Forms.Button();
            this.butMul = new System.Windows.Forms.Button();
            this.labelRes = new System.Windows.Forms.Label();
            this.label = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // num1
            // 
            this.num1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.num1.Location = new System.Drawing.Point(12, 23);
            this.num1.Name = "num1";
            this.num1.Size = new System.Drawing.Size(100, 26);
            this.num1.TabIndex = 0;
            // 
            // num2
            // 
            this.num2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.num2.Location = new System.Drawing.Point(12, 90);
            this.num2.Name = "num2";
            this.num2.Size = new System.Drawing.Size(100, 26);
            this.num2.TabIndex = 1;
            // 
            // butPlus
            // 
            this.butPlus.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.butPlus.Location = new System.Drawing.Point(12, 161);
            this.butPlus.Name = "butPlus";
            this.butPlus.Size = new System.Drawing.Size(40, 40);
            this.butPlus.TabIndex = 2;
            this.butPlus.Text = "+";
            this.butPlus.UseVisualStyleBackColor = true;
            this.butPlus.Click += new System.EventHandler(this.butPlus_Click);
            // 
            // butMin
            // 
            this.butMin.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.butMin.Location = new System.Drawing.Point(58, 161);
            this.butMin.Name = "butMin";
            this.butMin.Size = new System.Drawing.Size(40, 40);
            this.butMin.TabIndex = 3;
            this.butMin.Text = "-";
            this.butMin.UseVisualStyleBackColor = true;
            this.butMin.Click += new System.EventHandler(this.butMin_Click);
            // 
            // butDiv
            // 
            this.butDiv.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.butDiv.Location = new System.Drawing.Point(12, 207);
            this.butDiv.Name = "butDiv";
            this.butDiv.Size = new System.Drawing.Size(40, 40);
            this.butDiv.TabIndex = 4;
            this.butDiv.Text = "/";
            this.butDiv.UseVisualStyleBackColor = true;
            this.butDiv.Click += new System.EventHandler(this.butDiv_Click);
            // 
            // butMul
            // 
            this.butMul.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.butMul.Location = new System.Drawing.Point(58, 207);
            this.butMul.Name = "butMul";
            this.butMul.Size = new System.Drawing.Size(40, 40);
            this.butMul.TabIndex = 5;
            this.butMul.Text = "*";
            this.butMul.UseVisualStyleBackColor = true;
            this.butMul.Click += new System.EventHandler(this.butMul_Click);
            // 
            // labelRes
            // 
            this.labelRes.AutoSize = true;
            this.labelRes.Location = new System.Drawing.Point(17, 133);
            this.labelRes.Name = "labelRes";
            this.labelRes.Size = new System.Drawing.Size(35, 13);
            this.labelRes.TabIndex = 6;
            this.labelRes.Text = "label1";
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Location = new System.Drawing.Point(12, 64);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(35, 13);
            this.label.TabIndex = 7;
            this.label.Text = "label2";
            // 
            // FormCal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(120, 292);
            this.Controls.Add(this.label);
            this.Controls.Add(this.labelRes);
            this.Controls.Add(this.butMul);
            this.Controls.Add(this.butDiv);
            this.Controls.Add(this.butMin);
            this.Controls.Add(this.butPlus);
            this.Controls.Add(this.num2);
            this.Controls.Add(this.num1);
            this.DoubleBuffered = true;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "FormCal";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox num1;
        private System.Windows.Forms.TextBox num2;
        private System.Windows.Forms.Button butPlus;
        private System.Windows.Forms.Button butMin;
        private System.Windows.Forms.Button butDiv;
        private System.Windows.Forms.Button butMul;
        private System.Windows.Forms.Label labelRes;
        private System.Windows.Forms.Label label;
    }
}

