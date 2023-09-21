/*Implemente un programa que lea un número entero Numero e:
imprima el mismo numero,
imprima el numero_invertido: el número obtenido al invertir los dígitos
en la representación decimal del numero,
imprima "si" si numero es un capicúa (https://es.wikipedia.org/wiki/Capic%C3%BAa) y "no" en otro caso.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int numero;
    cout << "ingrese un numero:";
    cin >> numero;

    int numero_invertido = 0;
    int original = numero;

    while (numero != 0) {
        numero_invertido = numero_invertido * 10 + numero % 10;
        numero /= 10;
    }
    if (numero_invertido == original){
        cout<< "numero original: " << original << endl;
        cout<< "numero inverido: " << numero_invertido << endl;
        cout<< "Si es capicua." << endl;
    }else{
        cout<< "numero original: " << original << endl;
        cout<< "numero inverido: " << numero_invertido << endl;
        cout<< "No es capicua." << endl;
    }
    
    return 0;
}
