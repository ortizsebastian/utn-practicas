#ifndef FUNCIONES_GENERALES_H_INCLUDED
#define FUNCIONES_GENERALES_H_INCLUDED

void mostrarVector(int v[], int tam);

void cargarNombre(char v[]);

void mostrarNombre(char v[]);

void cargarVector(int v[], int tam);

int contarNumerosRepetidos(int v[], int numero , int tam); /// Cuenta la cantidad de veces que se repite un número en el vector.

int maximoVector(int v[], int tam); /// Devuelve  la posición (primera) que ocupa el máximo en el vector.

int minimoVector(int v[], int tam); /// Devuelve  la posición (primera) que ocupa el mínimo en el vector.

void cargarAleatorio(int v[], int tam, int limite); /// Asigna valores aleatorios al vector.

void ordenarVector(int v[], int tam); /// Ordena de menor a mayor un vector.

int sumarVector(int v[], int tam); /// Suma los valores contenidos en el vector.

void copiarVector(int v[], int v2[],int tam); /// Copia el vector v en v2.

void copiarVectorNombre(char v[], char v2[], int tam); /// Copia el vector v en v2 para los nombres.

bool compararVectores(int v[], int v2[],int tam); /// Compara los dos vectores que recibe. Si son iguales devuelve true, si no devuelve false.

float calcularPromedio(int v[], int tam); /// Calcula promedio dentro del vector.

int posicionNumeroEnVector(int v[],int tam, int numero); /// Dandole un número busca la posición de dicho número.


/// Desarrollo de funciones generales.


int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<tam;i++){
    if(v[i]==numero) return i;
    }
    return -1;
}

int minimoVector(int v[], int tam){
    int i, posMin=0;
    for(i=1;i<tam;i++){
        if(v[i]<v[posMin]) {
                posMin=i;
        }
    }
    return posMin;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
        if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
    for(i=0; i<tam; i++){
        v[i]=(rand()%limite)+1;
    }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\n";
    }
    cout<<endl;
}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

void copiarVectorNombre(char v[], char v2[], int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];
    }
}

float calcularPromedio(int v[], int tam){
    int suma;
    float prom;
    suma=sumarVector(v,tam);
    prom=(float)suma/tam;
    return prom;
}

void cargarNombre(char v[]){
    cin>>v;
}

void mostrarNombre(char v[]){
    cout<<v<<'\t';
    cout<<endl;
}

#endif // FUNCIONES_GENERALES_H_INCLUDED