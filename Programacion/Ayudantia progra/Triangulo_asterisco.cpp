#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numero;
    cin >> numero;
     for (int i = 1; i <= numero; i++){
         for (int j = 1; j <= i; j++){
             cout << "*";
     }
      cout << endl;
     }
    return 0;
}    