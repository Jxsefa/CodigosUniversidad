#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float promedio_nota(int n, float notas[]){
    float suma = 0;
    for(int i = 0; i < n; i++){
        cout << i + 1 << ". Indique la nota: ";
        cin >> notas[i];
        suma += notas[i];
    }
    return suma;
}

int main() {
    int n;
    cout << "Indique la cantidad de notas: ";
    cin >> n;

    float notas[n];
    float suma = promedio_nota(n, notas);
    float promedio = suma / n;

    cout << "Su promedio es: " << promedio;

    return 0;
}
