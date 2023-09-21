/*Considere un partido del juego El Gato (https://es.wikipedia.org/wiki/Tres_en_l%C3%ADnea) en que empieza 
el jugador de la 'X'.
Desarrolle un programa que lea el estado actual del tablero e imprima:
°'X' si le toca al jugador de la 'X',
°'O' si le toca al jugador de la 'O',
°'_' si el estado del tablero no permite 
jugar (la diferencia entre la cantidad de 'X' y la cantidad de 'O' no está dentro del 
conjunto  o el tablero ya está lleno).*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char tablero[3][3];
    string f;
    int contadorx= 0;
    int contadoro= 0;
    int contador_= 0;
    
     for(int fila=0; fila < 3; fila++){
         cin >> f;
        for(int columna = 0; columna < 3;columna++){
         tablero [fila][columna]=f[columna];
         }
     }
    for(int fila=0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            if(tablero[fila][columna] == 'X'){
                contadorx++;
            }
            else if (tablero[fila][columna] =='O'){
                contadoro++;
            }
            else if (tablero[fila][columna]== '_'){
                contador_++;
            }
        }
    }
    if (contadorx == contadoro){
        cout << "X" << endl;
    }else if (contadorx > contadoro){
        cout << "O" << endl;
    }else if (contador_ == 0){
        cout << "_" << endl;
    }
        
return 0;
}