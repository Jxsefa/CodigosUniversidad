#include <iostream>
using namespace std;

int sumar_arreglo(int arreglo[], int n) { //esta es la funcion y lo que hace es sumar los numeros del arreglos.
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return suma;
}

int main() {
    int n;//la camntidad de numeros que voya ingresar que tambien es el tamaño de mi arreglo.
    cout << "Ingrese la cantidad de numeros que va a sumar: ";
    cin >> n;
    int arreglo[n];
    
    cout << "Ingrese los numeros: "; //este for lo que hace es agregar los nhumeros a el arreglo
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];//aqui es donde se gusrda el arreglo
    }

    int resultado = sumar_arreglo(arreglo, n);//aqui es donde llamo a la funcion.
    cout << "La suma de los numeros es: " << resultado;
    return 0;
}