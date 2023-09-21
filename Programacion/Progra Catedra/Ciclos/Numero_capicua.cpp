/*Implemente un programa que lea un número entero  e:
°imprima el mismo numero,
°imprima el numero_invertido : el número obtenido al invertir los dígitos en 
la representación decimal del numero.
°imprima "si" si numero es un capicúa (https://es.wikipedia.org/wiki/Capic%C3%BAa) y "no" en otro caso.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int invertido=0;
    int digito;
    int numero;
    cout << "ingrese el numero: ";
    cin >> numero;
    int numero_original = numero;

    while (numero >= 0) {
        digito = numero % 10;
        invertido = (invertido * 10) + digito;
        numero /= 10;
    }

    cout << "Numero original: " << numero_original << endl;
    cout << "Numero invertdo: " << invertido << endl;

    if(numero_original==invertido){
        cout << "Este numero es capicua" << endl;
    }else{
        cout << "Este NO numero es capicua" << endl;
    }

    return 0
}