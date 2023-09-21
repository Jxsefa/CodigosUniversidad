/*El Cine Vergara tiene dos pisos. 
El Piso 1 está conformado por 4 filas con 10 asientos por fila, el Piso 2 tiene 2 filas con 6 asientos por fila.
Se ha decidido implementar el Cine con dos matrices, 4x10 y 2x6, respectivamente. 
Si la celda respectiva contiene , el asiento está disponible, y si está en 1, el asiento está ocupado.
Desarrolle un programa que permita en forma interactiva reservar asientos del cine. 
Se debe preguntar por el piso, luego la fila y la columna del asiento respectivo (un dato por línea). 
Antes de pedir al usuario que indique un asiento, 
se debe visualizar las disponibilides (imprimir los asientos disponibles y ocupados), de modo de facilitar 
el ingreso de datos.
El programa debe terminar cuando se le de una indicación de término (seleccionando el Piso 0),
o bien el total de asientos está ocupado.
Al trabajar en equipo, a usted le corresponde sólo implementar la función main. 
Las demás funciones ya fueron desarrolladas por sus compañeros y usted no debe modificarlas. 
El resultado del trabajo de su equipo está disponible en el IDE.*/
#include <iostream>

using namespace std;

void inicializar_piso_1(int piso_1[4][10]) {
  // Esta función inicializa Piso 1 con asientos vacíos.
  for (int f = 0; f < 4; f++) {
    for (int c = 0; c < 10; c++) {
      piso_1[f][c] = 0;
    }
  }
}

void inicializar_piso_2(int piso_1[2][6]) {
  // Esta función inicializa Piso 2 con asientos vacíos.
  for (int f = 0; f < 2; f++) {
    for (int c = 0; c < 6; c++) {
      piso_1[f][c] = 0;
    }
  }
}

void imprimir_piso_1(int piso_1[4][10]) {
  // Esta función imprime las disponibilidades en el Piso 1.
  cout << "Piso 1" << endl;
  for (int f = 0; f < 4; f++) {
    for (int c = 0; c < 10; c++) {
      cout << (piso_1[f][c]== 0 ? '-' : 'X');
    }
    cout << endl;
  }
}

void imprimir_piso_2(int piso_2[2][6]) {
  // Esta función imprime las disponibilidades en el Piso 2.
  cout << "Piso 2" << endl;
  for (int f = 0; f < 2; f++) {
    for (int c = 0; c < 6; c++) {
      cout << (piso_2[f][c]== 0 ? '-' : 'X');
    }
    cout << endl;
  }
}

bool leer_asiento(int& piso, int& fila, int& columna) {
  // Esta función lee la información del asiento seleccionado 
  // y deja su información en las variables recibidas.
  // Si el piso es 0, ya no lee la fila y el asiento.
  // El valor devuelto es true si el piso indicado es diferente de 0, false eoc.
  cin >> piso;
  if(piso != 0) {
    cin >> fila;
    fila -= 1;
    cin >> columna;
    columna -= 1;
  }
  return (piso != 0);
}

// Implemente la función main aquí.
// La función debe usar las demás funciones para cumplir con los objetivos del programa.