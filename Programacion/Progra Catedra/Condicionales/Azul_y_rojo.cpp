/*Desarrolle un programa que lea una nota n y escriba:
"azul" si la nota es superior o igual a 4,
"roja" si es inferior a 4.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int Nota;

    cout << "Igrese nota obtenida:";
    cin >> Nota;

    if (Nota >= 4){
        cout << "Tu nota es Azul";
    }
    else{
        cout << "Tu nota es Roja";
    }
    return 0;
}