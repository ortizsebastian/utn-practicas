using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void validarOk()
        {
            //Habilita el Botón, siempre y cuando txtNombre tenga datos.
            btn_ok.Enabled = txtbox_nombre.BackColor != Color.Red;
        }

        private void txtbox_nombre_Validating(object sender, CancelEventArgs e)
        {
            TextBox tb = (TextBox)sender;
            if (tb.Text.Length == 0)
                tb.BackColor = Color.Red;
            else
                tb.BackColor = System.Drawing.SystemColors.Window;
            validarOk();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //Deshabilito el Botón Ok.
            btn_ok.Enabled = false;
        }

        private void btn_ok_Click(object sender, EventArgs e)
        {
            //No valido datos ya que si el Botón esta Habilitado
            //es porque paso el Evento Validating del Nombre.
            String salida; //Declaro una variable para armar la salida.
            salida = "Nombe: " + txtbox_nombre.Text + "\r\n";
            salida += "Ocupacion: " + (string)(chkbox_programmer.Checked ?
            "Programador" : "No es Programador") + "\r\n";
            salida += "Sexo: " + (string)(rbtn_man.Checked ? "Hombre" :
            "Mujer") + "\r\n";

            //Vuelco la salida al TextBox 
            txtOut.Text = salida;
        }
    }
}
