/*Desarrolle un programa que lea una línea con dos números enteros a y b separados por un 
espacio e imprima una línea con los mismos dos valores, pero intercambiados.
Se le entrega un programa que se hace cargo de leer desde cin los datos de entrada, usar 
la función intercambiar y escribir al cout los datos de salida. Sin embargo, la función intercambiar está mal 
implementada y el programa no funciona correctamente.
Se le solicita que corrija la función intercammbiar, sin modificar otras partes del código.*/
#include <iostream>

using namespace std;

void intercambiar(int pA, int pB) {

  int aux = pA;
  pA = pB;
  pB = aux;

}

int main() {

  int a, b;
  cin >> a >> b;
  intercambiar(a, b);
  cout << a << b;

  return 0;
}