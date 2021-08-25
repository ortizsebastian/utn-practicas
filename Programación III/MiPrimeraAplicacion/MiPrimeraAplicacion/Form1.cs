using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MiPrimeraAplicacion
{
    public partial class MiPrimeraApp : Form
    {
        public MiPrimeraApp()
        {
            InitializeComponent();
        }

        private void btn_aceptar_Click(object sender, EventArgs e)
        {
            bool flag = true;
            if (txtbox_apellido.Text == "")
                txtbox_apellido.BackColor = Color.Yellow;
            else
                txtbox_apellido.BackColor = System.Drawing.SystemColors.Control;

            if (txtbox_nombre.Text == "")
                txtbox_nombre.BackColor = Color.Yellow;
            else
                txtbox_nombre.BackColor = System.Drawing.SystemColors.Control;

            if (txtbox_edad.Text == "")
                txtbox_edad.BackColor = Color.Yellow;
            else
                txtbox_edad.BackColor = System.Drawing.SystemColors.Control;

            if (txtbox_direccion.Text == "")
                txtbox_direccion.BackColor = Color.Yellow;
            else
                txtbox_direccion.BackColor = System.Drawing.SystemColors.Control;


            if (txtbox_apellido.Text == "" || txtbox_nombre.Text == "" || txtbox_edad.Text == "" || txtbox_direccion.Text == "")
                flag = false;

            if (flag)
                txtbox_resultado.Text = "Apellido y Nombre: " + txtbox_nombre.Text + " " + txtbox_apellido.Text + Environment.NewLine + "Edad: " + txtbox_edad.Text + Environment.NewLine + "Direccion: " + txtbox_direccion.Text;
        }

        private void txtbox_edad_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar < 48 || e.KeyChar > 59) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void btn_cancelar_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
