/*Desarrolle un programa que lea un año a y 
escriba la cantidad de días d del febrero del año indicado. */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int ano;
  
  cout << "ingrese el año: ";
  cin >> ano;

  if(ano % 100 != 0){
    if(ano % 4 == 0){
      cout << ano << " es un año biciesto";
    }else 
      cout << ano << " no es un año biciesto";
  }else if (ano % 400 == 0){
    cout << ano << " es un año biciesto";
  }else{ 
    cout << ano << " no es un año biciesto";
  }
    return 0;
}