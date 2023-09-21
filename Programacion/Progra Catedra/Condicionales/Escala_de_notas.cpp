/*Desarrolle un programa que lea una nota  y escriba:
"insuficiente" si n E [1,4)
"suficiente" si n E [4,5)
"buena" si n E [5,6)
"sobresaliente" si n E [6,7] */

#include <iostream>
using namespace std;

int main() {
    int Nota;

    cout << "Ingrese la nota obtenida: ";
    cin >> Nota;

    switch (Nota) {
        case 1:
        case 2:
        case 3:
            cout << "Nota insuficiente" << endl;
            break;
        case 4:
        case 5:
            cout << "Nota suficiente" << endl;
            break;
        case 6:
            cout << "Nota buena" << endl;
            break;
        case 7:
            cout << "Nota sobresaliente" << endl;
            break;
        default:
            cout << "Dato ingresado invalido, recuerde que las notas deben ser del 1 al 7. Intentelo de nuevo." << endl;
            break;
    }

    return 0;
}

