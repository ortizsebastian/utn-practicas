
namespace WindowsFormsApp2
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn_ok = new System.Windows.Forms.Button();
            this.lbl_nombre = new System.Windows.Forms.Label();
            this.txtbox_nombre = new System.Windows.Forms.TextBox();
            this.chkbox_programmer = new System.Windows.Forms.CheckBox();
            this.gbox_sexo = new System.Windows.Forms.GroupBox();
            this.rbtn_women = new System.Windows.Forms.RadioButton();
            this.rbtn_man = new System.Windows.Forms.RadioButton();
            this.lbl_out = new System.Windows.Forms.Label();
            this.txtOut = new System.Windows.Forms.TextBox();
            this.gbox_sexo.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn_ok
            // 
            this.btn_ok.Location = new System.Drawing.Point(378, 33);
            this.btn_ok.Name = "btn_ok";
            this.btn_ok.Size = new System.Drawing.Size(75, 23);
            this.btn_ok.TabIndex = 0;
            this.btn_ok.Text = "OK";
            this.btn_ok.UseVisualStyleBackColor = true;
            this.btn_ok.Click += new System.EventHandler(this.btn_ok_Click);
            // 
            // lbl_nombre
            // 
            this.lbl_nombre.AutoSize = true;
            this.lbl_nombre.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_nombre.Location = new System.Drawing.Point(33, 32);
            this.lbl_nombre.Name = "lbl_nombre";
            this.lbl_nombre.Size = new System.Drawing.Size(62, 18);
            this.lbl_nombre.TabIndex = 1;
            this.lbl_nombre.Text = "Nombre";
            // 
            // txtbox_nombre
            // 
            this.txtbox_nombre.Location = new System.Drawing.Point(128, 34);
            this.txtbox_nombre.Name = "txtbox_nombre";
            this.txtbox_nombre.Size = new System.Drawing.Size(222, 20);
            this.txtbox_nombre.TabIndex = 2;
            this.txtbox_nombre.Validating += new System.ComponentModel.CancelEventHandler(this.txtbox_nombre_Validating);
            // 
            // chkbox_programmer
            // 
            this.chkbox_programmer.AutoSize = true;
            this.chkbox_programmer.CheckAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.chkbox_programmer.Checked = true;
            this.chkbox_programmer.CheckState = System.Windows.Forms.CheckState.Checked;
            this.chkbox_programmer.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkbox_programmer.Location = new System.Drawing.Point(33, 82);
            this.chkbox_programmer.Name = "chkbox_programmer";
            this.chkbox_programmer.Size = new System.Drawing.Size(115, 22);
            this.chkbox_programmer.TabIndex = 4;
            this.chkbox_programmer.Text = "Programador";
            this.chkbox_programmer.UseVisualStyleBackColor = true;
            // 
            // gbox_sexo
            // 
            this.gbox_sexo.Controls.Add(this.rbtn_women);
            this.gbox_sexo.Controls.Add(this.rbtn_man);
            this.gbox_sexo.FlatStyle = System.Windows.Forms.FlatStyle.System;
            this.gbox_sexo.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gbox_sexo.Location = new System.Drawing.Point(36, 127);
            this.gbox_sexo.Name = "gbox_sexo";
            this.gbox_sexo.Size = new System.Drawing.Size(420, 100);
            this.gbox_sexo.TabIndex = 5;
            this.gbox_sexo.TabStop = false;
            this.gbox_sexo.Text = "Sexo";
            // 
            // rbtn_women
            // 
            this.rbtn_women.AutoSize = true;
            this.rbtn_women.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rbtn_women.Location = new System.Drawing.Point(251, 46);
            this.rbtn_women.Name = "rbtn_women";
            this.rbtn_women.Size = new System.Drawing.Size(63, 22);
            this.rbtn_women.TabIndex = 5;
            this.rbtn_women.Text = "Mujer";
            this.rbtn_women.UseVisualStyleBackColor = true;
            // 
            // rbtn_man
            // 
            this.rbtn_man.AutoSize = true;
            this.rbtn_man.Checked = true;
            this.rbtn_man.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rbtn_man.Location = new System.Drawing.Point(92, 46);
            this.rbtn_man.Name = "rbtn_man";
            this.rbtn_man.Size = new System.Drawing.Size(80, 22);
            this.rbtn_man.TabIndex = 4;
            this.rbtn_man.TabStop = true;
            this.rbtn_man.Text = "Hombre";
            this.rbtn_man.UseVisualStyleBackColor = true;
            // 
            // lbl_out
            // 
            this.lbl_out.AutoSize = true;
            this.lbl_out.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbl_out.Location = new System.Drawing.Point(33, 247);
            this.lbl_out.Name = "lbl_out";
            this.lbl_out.Size = new System.Drawing.Size(48, 18);
            this.lbl_out.TabIndex = 6;
            this.lbl_out.Text = "Salida";
            // 
            // txtOut
            // 
            this.txtOut.Location = new System.Drawing.Point(36, 271);
            this.txtOut.Multiline = true;
            this.txtOut.Name = "txtOut";
            this.txtOut.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtOut.Size = new System.Drawing.Size(417, 99);
            this.txtOut.TabIndex = 7;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(493, 398);
            this.Controls.Add(this.txtOut);
            this.Controls.Add(this.lbl_out);
            this.Controls.Add(this.gbox_sexo);
            this.Controls.Add(this.chkbox_programmer);
            this.Controls.Add(this.txtbox_nombre);
            this.Controls.Add(this.lbl_nombre);
            this.Controls.Add(this.btn_ok);
            this.Name = "Form1";
            this.Text = "CheckBox y RadioButton";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.gbox_sexo.ResumeLayout(false);
            this.gbox_sexo.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_ok;
        private System.Windows.Forms.Label lbl_nombre;
        private System.Windows.Forms.TextBox txtbox_nombre;
        private System.Windows.Forms.CheckBox chkbox_programmer;
        private System.Windows.Forms.GroupBox gbox_sexo;
        private System.Windows.Forms.RadioButton rbtn_women;
        private System.Windows.Forms.RadioButton rbtn_man;
        private System.Windows.Forms.Label lbl_out;
        private System.Windows.Forms.TextBox txtOut;
    }
}

