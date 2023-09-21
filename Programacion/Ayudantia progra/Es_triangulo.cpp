/*Escriba un programa que, a partir de 3 medidas ingresadas por el usuario, 
determine si es un triangulo.
En caso de ser correcto, imprima "SI". 
En caso contrario (no es un triangulo), imprima "NO".*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int triangulo(int operacion, int a , int b, int c){
   operacion = a + b;

   if(operacion > c){
    cout << "SI es triangulo";
   }else{
    cout << "NO es triangulo";
   } 
    return operacion;
}
int main() {

    int a;
    int b;
    int c;
    int operacion;

    cout << "ingrse la medidas para comprobar si es un triangulo" << endl;
    cout << "lado a: ";
    cin >> a;
    cout << "lado b: ";
    cin >> b;
    cout << "lado c: ";
    cin >> c;

    triangulo(operacion, a, b, c);
    
    return 0;
}