/*Escriba un programa que lea un número entero de 8 dígitos 
correspondiente a un número rut (sin los puntos, el guión ni el dígito verificador) 
e imprima el dígito verificador correspondiente.
El algoritmo que se usa para calcular el dígito verificador de un número RUT
está descrito en la siguiente página: https://es.wikipedia.org/wiki/Rol_%C3%9Anico_Tributario.
A diferencia del algoritmo completo que realiza la siguiente sustitución*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int rut;
  int calculo;
  int digitos[8];
  int Multiplicacion[6] = {2, 3, 4, 5, 6, 7};
  cout << "ingrese su rut sin su digito verificador: " ;
  cin >> rut;
    
    for (int i=0; i<8; i++) {
        digitos[i] = rut % 10;
        rut /= 10;        
    }
        calculo = 0;

        for (int i=0; i<8; i++) {
            calculo += digitos[i] * Multiplicacion[i % 6];
            }
    calculo = calculo % 11;
    calculo = 11 - calculo;
    cout << "el digito verificador de su rut es:- " << calculo << endl;

    return 0;
}
