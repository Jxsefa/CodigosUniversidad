/*Implemente un programa que lea un número entero numero e 
imprima el numero_invertido: el número obtenido al invertir los dígitos en 
la representación decimal del numero.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int arreglo[n];
    cin >> n;
    for(int i = 0; i < n; i++){
        arreglo[i]=i;
        cout << i << endl;
    }

    return 0;
}