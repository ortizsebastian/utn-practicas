
namespace WindowsFormsApp4
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
            this.lbSeleccionados = new System.Windows.Forms.ListBox();
            this.clbValores = new System.Windows.Forms.CheckedListBox();
            this.btnMover = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbSeleccionados
            // 
            this.lbSeleccionados.FormattingEnabled = true;
            this.lbSeleccionados.Location = new System.Drawing.Point(440, 13);
            this.lbSeleccionados.Name = "lbSeleccionados";
            this.lbSeleccionados.Size = new System.Drawing.Size(273, 303);
            this.lbSeleccionados.TabIndex = 0;
            // 
            // clbValores
            // 
            this.clbValores.CheckOnClick = true;
            this.clbValores.FormattingEnabled = true;
            this.clbValores.Items.AddRange(new object[] {
            "Uno",
            "Dos",
            "Tres",
            "Cuatro",
            "Cinco",
            "Seis",
            "Siete",
            "Ocho",
            "Nueve"});
            this.clbValores.Location = new System.Drawing.Point(12, 12);
            this.clbValores.Name = "clbValores";
            this.clbValores.Size = new System.Drawing.Size(281, 304);
            this.clbValores.TabIndex = 1;
            // 
            // btnMover
            // 
            this.btnMover.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnMover.Location = new System.Drawing.Point(323, 153);
            this.btnMover.Name = "btnMover";
            this.btnMover.Size = new System.Drawing.Size(86, 30);
            this.btnMover.TabIndex = 2;
            this.btnMover.Text = "Mover";
            this.btnMover.UseVisualStyleBackColor = true;
            this.btnMover.Click += new System.EventHandler(this.btnMover_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(728, 331);
            this.Controls.Add(this.btnMover);
            this.Controls.Add(this.clbValores);
            this.Controls.Add(this.lbSeleccionados);
            this.Name = "Form1";
            this.Text = "ListBox y CheckedListBox";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox lbSeleccionados;
        private System.Windows.Forms.CheckedListBox clbValores;
        private System.Windows.Forms.Button btnMover;
    }
}

