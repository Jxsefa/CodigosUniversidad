#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
        
    if ((a + b + c)% 2 == 0){
        cout << "Es par" << endl;
        
    
    }else
        cout << "Es impar" << endl;
        
    return 0;
}