/*Se le pide crear un programa que reciba la base y la altura de un triangulo
 y entregue el área de este.*/
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int area_triangulo (int base, int altura){ 
    int area;
    area = (base * altura) / 2;

    return area;
}
int main() {

    int base;
    int altura;
    
    cout << "ingrese cuanto mide la base: ";
    cin >> base;
    cout << "ingrese cuanto mide la altura: ";
    cin >> altura;

    int resultado  = area_triangulo(base, altura);
    
    cout << "El area del triangulo es " << resultado << endl; 
        
    return 0;
}