#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
float promedio (int nota[n]){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += nota[i];
    }
}

int main() {
    float nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;
    float promedio = ((nota1 + nota2 + nota3)/3);
    
    if (promedio >= 5.0){
        cout << "EXIMIDO" << endl;
    }
    else if (promedio < 3.5){
        cout << "REPROBADO" << endl;
    }
    else{
    cout << "RINDE EXAMEN " << endl;
    }
    return 0;
}