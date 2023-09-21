/*Desarrolle un programa que lea un número entero n e imprima el valor de la factorial n!.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numero_factorial(int n){
    int mi_factorial=1;
    if (n==0){
        mi_factorial=1;
    }else{
        for(int i = 1; i <= n; i++){
        mi_factorial = mi_factorial * i;
        }
    }
    return mi_factorial;
}
int main() {
    int n;
    int mi_factorial;
    cout << "ingrese su numero factorial a calcular: ";
    cin >> n;
    mi_factorial=numero_factorial(n);
    cout << "El numero factorial de "<< n << " es: "<< mi_factorial;

    return 0;
}
