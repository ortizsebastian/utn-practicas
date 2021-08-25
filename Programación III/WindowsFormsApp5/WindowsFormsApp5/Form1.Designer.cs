
namespace WindowsFormsApp5
{
    partial class frmListView
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmListView));
            this.gbVista = new System.Windows.Forms.GroupBox();
            this.rbTitulo = new System.Windows.Forms.RadioButton();
            this.rbDetalle = new System.Windows.Forms.RadioButton();
            this.rbLista = new System.Windows.Forms.RadioButton();
            this.rbSmall = new System.Windows.Forms.RadioButton();
            this.rbLarge = new System.Windows.Forms.RadioButton();
            this.lblActualdir = new System.Windows.Forms.Label();
            this.btnAtras = new System.Windows.Forms.Button();
            this.imageListLarge = new System.Windows.Forms.ImageList(this.components);
            this.imageListSmall = new System.Windows.Forms.ImageList(this.components);
            this.lvCarpetas = new System.Windows.Forms.ListView();
            this.gbVista.SuspendLayout();
            this.SuspendLayout();
            // 
            // gbVista
            // 
            this.gbVista.Controls.Add(this.rbTitulo);
            this.gbVista.Controls.Add(this.rbDetalle);
            this.gbVista.Controls.Add(this.rbLista);
            this.gbVista.Controls.Add(this.rbSmall);
            this.gbVista.Controls.Add(this.rbLarge);
            this.gbVista.Location = new System.Drawing.Point(525, 50);
            this.gbVista.Name = "gbVista";
            this.gbVista.Size = new System.Drawing.Size(171, 339);
            this.gbVista.TabIndex = 0;
            this.gbVista.TabStop = false;
            this.gbVista.Text = "Modo de Vista";
            // 
            // rbTitulo
            // 
            this.rbTitulo.AutoSize = true;
            this.rbTitulo.Location = new System.Drawing.Point(19, 211);
            this.rbTitulo.Name = "rbTitulo";
            this.rbTitulo.Size = new System.Drawing.Size(51, 17);
            this.rbTitulo.TabIndex = 3;
            this.rbTitulo.TabStop = true;
            this.rbTitulo.Text = "Titulo";
            this.rbTitulo.UseVisualStyleBackColor = true;
            this.rbTitulo.CheckedChanged += new System.EventHandler(this.rbTitulo_CheckedChanged);
            // 
            // rbDetalle
            // 
            this.rbDetalle.AutoSize = true;
            this.rbDetalle.Location = new System.Drawing.Point(19, 165);
            this.rbDetalle.Name = "rbDetalle";
            this.rbDetalle.Size = new System.Drawing.Size(58, 17);
            this.rbDetalle.TabIndex = 2;
            this.rbDetalle.TabStop = true;
            this.rbDetalle.Text = "Detalle";
            this.rbDetalle.UseVisualStyleBackColor = true;
            this.rbDetalle.CheckedChanged += new System.EventHandler(this.rbDetalle_CheckedChanged);
            // 
            // rbLista
            // 
            this.rbLista.AutoSize = true;
            this.rbLista.Location = new System.Drawing.Point(19, 121);
            this.rbLista.Name = "rbLista";
            this.rbLista.Size = new System.Drawing.Size(47, 17);
            this.rbLista.TabIndex = 1;
            this.rbLista.TabStop = true;
            this.rbLista.Text = "Lista";
            this.rbLista.UseVisualStyleBackColor = true;
            this.rbLista.CheckedChanged += new System.EventHandler(this.rbLista_CheckedChanged);
            // 
            // rbSmall
            // 
            this.rbSmall.AutoSize = true;
            this.rbSmall.Location = new System.Drawing.Point(19, 78);
            this.rbSmall.Name = "rbSmall";
            this.rbSmall.Size = new System.Drawing.Size(71, 17);
            this.rbSmall.TabIndex = 1;
            this.rbSmall.TabStop = true;
            this.rbSmall.Text = "SmallIcon";
            this.rbSmall.UseVisualStyleBackColor = true;
            this.rbSmall.CheckedChanged += new System.EventHandler(this.rbSmall_CheckedChanged);
            // 
            // rbLarge
            // 
            this.rbLarge.AutoSize = true;
            this.rbLarge.Location = new System.Drawing.Point(19, 36);
            this.rbLarge.Name = "rbLarge";
            this.rbLarge.Size = new System.Drawing.Size(73, 17);
            this.rbLarge.TabIndex = 0;
            this.rbLarge.TabStop = true;
            this.rbLarge.Text = "LargeIcon";
            this.rbLarge.UseVisualStyleBackColor = true;
            this.rbLarge.CheckedChanged += new System.EventHandler(this.rbLarge_CheckedChanged);
            // 
            // lblActualdir
            // 
            this.lblActualdir.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblActualdir.Location = new System.Drawing.Point(13, 24);
            this.lblActualdir.Name = "lblActualdir";
            this.lblActualdir.Size = new System.Drawing.Size(100, 23);
            this.lblActualdir.TabIndex = 1;
            this.lblActualdir.Text = "Directorio Actual";
            // 
            // btnAtras
            // 
            this.btnAtras.Location = new System.Drawing.Point(220, 405);
            this.btnAtras.Name = "btnAtras";
            this.btnAtras.Size = new System.Drawing.Size(71, 22);
            this.btnAtras.TabIndex = 3;
            this.btnAtras.Text = "Atras";
            this.btnAtras.UseVisualStyleBackColor = true;
            this.btnAtras.Click += new System.EventHandler(this.btnAtras_Click);
            // 
            // imageListLarge
            // 
            this.imageListLarge.ImageStream = ((System.Windows.Forms.ImageListStreamer)(resources.GetObject("imageListLarge.ImageStream")));
            this.imageListLarge.TransparentColor = System.Drawing.Color.Transparent;
            this.imageListLarge.Images.SetKeyName(0, "pp.jpg");
            // 
            // imageListSmall
            // 
            this.imageListSmall.ImageStream = ((System.Windows.Forms.ImageListStreamer)(resources.GetObject("imageListSmall.ImageStream")));
            this.imageListSmall.TransparentColor = System.Drawing.Color.Transparent;
            this.imageListSmall.Images.SetKeyName(0, "20210315_123924.jpg");
            // 
            // lvCarpetas
            // 
            this.lvCarpetas.HideSelection = false;
            this.lvCarpetas.Location = new System.Drawing.Point(16, 50);
            this.lvCarpetas.Name = "lvCarpetas";
            this.lvCarpetas.Size = new System.Drawing.Size(491, 339);
            this.lvCarpetas.TabIndex = 4;
            this.lvCarpetas.UseCompatibleStateImageBehavior = false;
            this.lvCarpetas.ItemActivate += new System.EventHandler(this.lvCarpetas_ItemActivate);
            // 
            // frmListView
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(713, 440);
            this.Controls.Add(this.lvCarpetas);
            this.Controls.Add(this.btnAtras);
            this.Controls.Add(this.lblActualdir);
            this.Controls.Add(this.gbVista);
            this.Name = "frmListView";
            this.Text = "ListView";
            this.gbVista.ResumeLayout(false);
            this.gbVista.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox gbVista;
        private System.Windows.Forms.RadioButton rbTitulo;
        private System.Windows.Forms.RadioButton rbDetalle;
        private System.Windows.Forms.RadioButton rbLista;
        private System.Windows.Forms.RadioButton rbSmall;
        private System.Windows.Forms.RadioButton rbLarge;
        private System.Windows.Forms.Label lblActualdir;
        private System.Windows.Forms.Button btnAtras;
        private System.Windows.Forms.ImageList imageListLarge;
        private System.Windows.Forms.ImageList imageListSmall;
        private System.Windows.Forms.ListView lvCarpetas;
    }
}

