using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnMover_Click(object sender, EventArgs e)
        {
            //Pregunta si la cantidad (Count) de elementos chequeados
            //en la colección de ítems chequeados(CheckedItems) es mayor a cero.
            if (clbValores.CheckedItems.Count > 0)
            {
                //Si es mayor a cero. Limpia los Ítem en el ListBox.
                lbSeleccionados.Items.Clear();

                //La sentencia foreach recorre la colección de Ítems Seleccionados
                //Y los asigna de a uno a la variable ítem del tipo String.
                foreach (string item in clbValores.CheckedItems)
                {
                    //Agrego los ítems seleccionados en la colección
                    //Al Listbox con el Método Add.
                    lbSeleccionados.Items.Add(item.ToString());
                }
                //Recorro todos los Ítems del CheckedListBox.
                for (int i = 0; i < clbValores.Items.Count; i++)
                    //Con el Método SetItemChecked, establezco en falso la
                    //casilla de verificación (No esta seleccionado).
                    //Como parámetros i-El índice y el valor de estado en este caso false.
                    clbValores.SetItemChecked(i, false);
            }
        }
    }
}
