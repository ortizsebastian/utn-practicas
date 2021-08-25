
namespace WindowsFormsApp3
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
            this.btnNegrita = new System.Windows.Forms.Button();
            this.btnSubrayado = new System.Windows.Forms.Button();
            this.btnCursiva = new System.Windows.Forms.Button();
            this.btnCentrado = new System.Windows.Forms.Button();
            this.lblTamanio = new System.Windows.Forms.Label();
            this.txtTamanio = new System.Windows.Forms.TextBox();
            this.btnGuardar = new System.Windows.Forms.Button();
            this.btnAbrir = new System.Windows.Forms.Button();
            this.rtxtEditor = new System.Windows.Forms.RichTextBox();
            this.SuspendLayout();
            // 
            // btnNegrita
            // 
            this.btnNegrita.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnNegrita.Location = new System.Drawing.Point(34, 38);
            this.btnNegrita.Name = "btnNegrita";
            this.btnNegrita.Size = new System.Drawing.Size(98, 35);
            this.btnNegrita.TabIndex = 0;
            this.btnNegrita.Text = "Negrita";
            this.btnNegrita.UseVisualStyleBackColor = true;
            this.btnNegrita.Click += new System.EventHandler(this.btnNegrita_Click);
            // 
            // btnSubrayado
            // 
            this.btnSubrayado.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnSubrayado.Location = new System.Drawing.Point(161, 38);
            this.btnSubrayado.Name = "btnSubrayado";
            this.btnSubrayado.Size = new System.Drawing.Size(98, 35);
            this.btnSubrayado.TabIndex = 1;
            this.btnSubrayado.Text = "Subrayado";
            this.btnSubrayado.UseVisualStyleBackColor = true;
            this.btnSubrayado.Click += new System.EventHandler(this.btnSubrayado_Click);
            // 
            // btnCursiva
            // 
            this.btnCursiva.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnCursiva.Location = new System.Drawing.Point(293, 38);
            this.btnCursiva.Name = "btnCursiva";
            this.btnCursiva.Size = new System.Drawing.Size(98, 35);
            this.btnCursiva.TabIndex = 2;
            this.btnCursiva.Text = "Cursiva";
            this.btnCursiva.UseVisualStyleBackColor = true;
            this.btnCursiva.Click += new System.EventHandler(this.btnCursiva_Click);
            // 
            // btnCentrado
            // 
            this.btnCentrado.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnCentrado.Location = new System.Drawing.Point(424, 38);
            this.btnCentrado.Name = "btnCentrado";
            this.btnCentrado.Size = new System.Drawing.Size(98, 35);
            this.btnCentrado.TabIndex = 3;
            this.btnCentrado.Text = "Centrado";
            this.btnCentrado.UseVisualStyleBackColor = true;
            // 
            // lblTamanio
            // 
            this.lblTamanio.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.lblTamanio.AutoSize = true;
            this.lblTamanio.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTamanio.Location = new System.Drawing.Point(157, 110);
            this.lblTamanio.Name = "lblTamanio";
            this.lblTamanio.Size = new System.Drawing.Size(40, 20);
            this.lblTamanio.TabIndex = 4;
            this.lblTamanio.Text = "Size";
            // 
            // txtTamanio
            // 
            this.txtTamanio.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.txtTamanio.Location = new System.Drawing.Point(223, 112);
            this.txtTamanio.MaxLength = 50000;
            this.txtTamanio.Name = "txtTamanio";
            this.txtTamanio.Size = new System.Drawing.Size(168, 20);
            this.txtTamanio.TabIndex = 5;
            this.txtTamanio.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtTamanio_KeyPress);
            this.txtTamanio.Validated += new System.EventHandler(this.txtTamanio_Validated);
            // 
            // btnGuardar
            // 
            this.btnGuardar.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.btnGuardar.Location = new System.Drawing.Point(161, 278);
            this.btnGuardar.Name = "btnGuardar";
            this.btnGuardar.Size = new System.Drawing.Size(98, 31);
            this.btnGuardar.TabIndex = 7;
            this.btnGuardar.Text = "Guardar";
            this.btnGuardar.UseVisualStyleBackColor = true;
            this.btnGuardar.Click += new System.EventHandler(this.btnGuardar_Click);
            // 
            // btnAbrir
            // 
            this.btnAbrir.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.btnAbrir.Location = new System.Drawing.Point(293, 278);
            this.btnAbrir.Name = "btnAbrir";
            this.btnAbrir.Size = new System.Drawing.Size(98, 31);
            this.btnAbrir.TabIndex = 8;
            this.btnAbrir.Text = "Abrir";
            this.btnAbrir.UseVisualStyleBackColor = true;
            this.btnAbrir.Click += new System.EventHandler(this.btnAbrir_Click);
            // 
            // rtxtEditor
            // 
            this.rtxtEditor.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.rtxtEditor.Location = new System.Drawing.Point(34, 138);
            this.rtxtEditor.Name = "rtxtEditor";
            this.rtxtEditor.Size = new System.Drawing.Size(488, 120);
            this.rtxtEditor.TabIndex = 9;
            this.rtxtEditor.Text = "";
            this.rtxtEditor.LinkClicked += new System.Windows.Forms.LinkClickedEventHandler(this.rtxtEditor_LinkClicked);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(558, 321);
            this.Controls.Add(this.rtxtEditor);
            this.Controls.Add(this.btnAbrir);
            this.Controls.Add(this.btnGuardar);
            this.Controls.Add(this.txtTamanio);
            this.Controls.Add(this.lblTamanio);
            this.Controls.Add(this.btnCentrado);
            this.Controls.Add(this.btnCursiva);
            this.Controls.Add(this.btnSubrayado);
            this.Controls.Add(this.btnNegrita);
            this.MinimumSize = new System.Drawing.Size(100, 100);
            this.Name = "Form1";
            this.Text = "RichTextBox";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnNegrita;
        private System.Windows.Forms.Button btnSubrayado;
        private System.Windows.Forms.Button btnCursiva;
        private System.Windows.Forms.Button btnCentrado;
        private System.Windows.Forms.Label lblTamanio;
        private System.Windows.Forms.TextBox txtTamanio;
        private System.Windows.Forms.Button btnGuardar;
        private System.Windows.Forms.Button btnAbrir;
        private System.Windows.Forms.RichTextBox rtxtEditor;
    }
}

