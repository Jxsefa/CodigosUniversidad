#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cout << "Cantidad de numeros a recibir: ";
    cin >> n;

    int cantidad[n];

    for(int i=0; i>n; i++){
        int numeros;
        cin >> numeros;

        if(numeros>0){
        cantidad[i] = numeros;
        }else{
        cantidad[i]=0;
        }
    }
    for (int i = 0; i < n; i++){
        cout << cantidad[i] << " ";
    }
    return 0;
}
