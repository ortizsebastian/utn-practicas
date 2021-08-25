
namespace MiPrimeraAplicacion
{
    partial class MiPrimeraApp
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
            this.lbl_apellido = new System.Windows.Forms.Label();
            this.lbl_nombre = new System.Windows.Forms.Label();
            this.lbl_edad = new System.Windows.Forms.Label();
            this.lbl_direccion = new System.Windows.Forms.Label();
            this.lbl_resultado = new System.Windows.Forms.Label();
            this.txtbox_apellido = new System.Windows.Forms.TextBox();
            this.txtbox_nombre = new System.Windows.Forms.TextBox();
            this.txtbox_edad = new System.Windows.Forms.TextBox();
            this.txtbox_direccion = new System.Windows.Forms.TextBox();
            this.btn_aceptar = new System.Windows.Forms.Button();
            this.btn_cancelar = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.txtbox_resultado = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // lbl_apellido
            // 
            this.lbl_apellido.AutoSize = true;
            this.lbl_apellido.Location = new System.Drawing.Point(36, 30);
            this.lbl_apellido.Name = "lbl_apellido";
            this.lbl_apellido.Size = new System.Drawing.Size(63, 14);
            this.lbl_apellido.TabIndex = 0;
            this.lbl_apellido.Text = "APELLIDO";
            // 
            // lbl_nombre
            // 
            this.lbl_nombre.AutoSize = true;
            this.lbl_nombre.Location = new System.Drawing.Point(36, 74);
            this.lbl_nombre.Name = "lbl_nombre";
            this.lbl_nombre.Size = new System.Drawing.Size(49, 14);
            this.lbl_nombre.TabIndex = 1;
            this.lbl_nombre.Text = "NOMBRE";
            // 
            // lbl_edad
            // 
            this.lbl_edad.AutoSize = true;
            this.lbl_edad.Location = new System.Drawing.Point(36, 117);
            this.lbl_edad.Name = "lbl_edad";
            this.lbl_edad.Size = new System.Drawing.Size(35, 14);
            this.lbl_edad.TabIndex = 2;
            this.lbl_edad.Text = "EDAD";
            // 
            // lbl_direccion
            // 
            this.lbl_direccion.AutoSize = true;
            this.lbl_direccion.Location = new System.Drawing.Point(36, 161);
            this.lbl_direccion.Name = "lbl_direccion";
            this.lbl_direccion.Size = new System.Drawing.Size(70, 14);
            this.lbl_direccion.TabIndex = 3;
            this.lbl_direccion.Text = "DIRECCIÓN";
            // 
            // lbl_resultado
            // 
            this.lbl_resultado.AutoSize = true;
            this.lbl_resultado.Location = new System.Drawing.Point(36, 203);
            this.lbl_resultado.Name = "lbl_resultado";
            this.lbl_resultado.Size = new System.Drawing.Size(70, 14);
            this.lbl_resultado.TabIndex = 4;
            this.lbl_resultado.Text = "RESULTADO";
            // 
            // txtbox_apellido
            // 
            this.txtbox_apellido.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtbox_apellido.Location = new System.Drawing.Point(234, 28);
            this.txtbox_apellido.MaxLength = 15;
            this.txtbox_apellido.Name = "txtbox_apellido";
            this.txtbox_apellido.Size = new System.Drawing.Size(189, 22);
            this.txtbox_apellido.TabIndex = 5;
            // 
            // txtbox_nombre
            // 
            this.txtbox_nombre.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtbox_nombre.Location = new System.Drawing.Point(234, 72);
            this.txtbox_nombre.MaxLength = 15;
            this.txtbox_nombre.Name = "txtbox_nombre";
            this.txtbox_nombre.Size = new System.Drawing.Size(189, 22);
            this.txtbox_nombre.TabIndex = 6;
            // 
            // txtbox_edad
            // 
            this.txtbox_edad.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtbox_edad.Location = new System.Drawing.Point(234, 115);
            this.txtbox_edad.MaxLength = 15;
            this.txtbox_edad.Name = "txtbox_edad";
            this.txtbox_edad.Size = new System.Drawing.Size(189, 22);
            this.txtbox_edad.TabIndex = 7;
            this.txtbox_edad.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtbox_edad_KeyPress);
            // 
            // txtbox_direccion
            // 
            this.txtbox_direccion.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtbox_direccion.Location = new System.Drawing.Point(234, 159);
            this.txtbox_direccion.MaxLength = 15;
            this.txtbox_direccion.Name = "txtbox_direccion";
            this.txtbox_direccion.Size = new System.Drawing.Size(189, 22);
            this.txtbox_direccion.TabIndex = 8;
            // 
            // btn_aceptar
            // 
            this.btn_aceptar.Location = new System.Drawing.Point(102, 327);
            this.btn_aceptar.Name = "btn_aceptar";
            this.btn_aceptar.Size = new System.Drawing.Size(87, 32);
            this.btn_aceptar.TabIndex = 10;
            this.btn_aceptar.Text = "Aceptar";
            this.btn_aceptar.UseVisualStyleBackColor = true;
            this.btn_aceptar.Click += new System.EventHandler(this.btn_aceptar_Click);
            // 
            // btn_cancelar
            // 
            this.btn_cancelar.Location = new System.Drawing.Point(256, 327);
            this.btn_cancelar.Name = "btn_cancelar";
            this.btn_cancelar.Size = new System.Drawing.Size(91, 32);
            this.btn_cancelar.TabIndex = 11;
            this.btn_cancelar.Text = "Cancelar";
            this.btn_cancelar.UseVisualStyleBackColor = true;
            this.btn_cancelar.Click += new System.EventHandler(this.btn_cancelar_Click);
            // 
            // txtbox_resultado
            // 
            this.txtbox_resultado.Location = new System.Drawing.Point(39, 231);
            this.txtbox_resultado.Multiline = true;
            this.txtbox_resultado.Name = "txtbox_resultado";
            this.txtbox_resultado.Size = new System.Drawing.Size(384, 79);
            this.txtbox_resultado.TabIndex = 12;
            // 
            // MiPrimeraApp
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 14F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.PaleGoldenrod;
            this.ClientSize = new System.Drawing.Size(461, 373);
            this.Controls.Add(this.txtbox_resultado);
            this.Controls.Add(this.btn_cancelar);
            this.Controls.Add(this.btn_aceptar);
            this.Controls.Add(this.txtbox_direccion);
            this.Controls.Add(this.txtbox_edad);
            this.Controls.Add(this.txtbox_nombre);
            this.Controls.Add(this.txtbox_apellido);
            this.Controls.Add(this.lbl_resultado);
            this.Controls.Add(this.lbl_direccion);
            this.Controls.Add(this.lbl_edad);
            this.Controls.Add(this.lbl_nombre);
            this.Controls.Add(this.lbl_apellido);
            this.Font = new System.Drawing.Font("mononoki Nerd Font", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(4, 3, 4, 3);
            this.Name = "MiPrimeraApp";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "DATOS PERSONALES";
            this.TransparencyKey = System.Drawing.Color.Red;
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbl_apellido;
        private System.Windows.Forms.Label lbl_nombre;
        private System.Windows.Forms.Label lbl_edad;
        private System.Windows.Forms.Label lbl_direccion;
        private System.Windows.Forms.Label lbl_resultado;
        private System.Windows.Forms.TextBox txtbox_apellido;
        private System.Windows.Forms.TextBox txtbox_nombre;
        private System.Windows.Forms.TextBox txtbox_edad;
        private System.Windows.Forms.TextBox txtbox_direccion;
        private System.Windows.Forms.Button btn_aceptar;
        private System.Windows.Forms.Button btn_cancelar;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.TextBox txtbox_resultado;
    }
}

