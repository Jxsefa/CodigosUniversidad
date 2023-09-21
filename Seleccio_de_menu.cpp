#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void menu_restaunante(){
    cout << " Nuestro restaurante cuenta con las siguintes opciones" << endl;
    cout << "   1. Pan con queso y jamon ($1.200)" << endl;
    cout << "   2. Agua sin gas ($900)" << endl;
    cout << "   3. Panqueques con manjar ($15.000)" << endl;
}
int elecciones_menu(int menu, int dinero){
    string res;
    switch (menu) {
        case 1:
            if (dinero >= 1200) {
                res = "Disfrute su comida!";
            } else {
                res = "No tiene dinero suficiente para el menu 1";
            }
            break;

        case 2:
            if (dinero >= 900) {
                res = "Disfrute su comida!";
            } else {
                res = "No tiene dinero suficiente para el menu 2";
            }
            break;

        case 3:
            if (dinero >= 15000) {
                res = "Disfrute su comida!";
            } else {
                res = "No tiene dinero suficiente para el menu 3";
            }
            break;

        default:
            res = "El menu seleccionado no existe";
            break;
    }
    cout << res << endl;

    return menu;
}
int main() {

    int menu;
    int dinero;
    string res;
    res = "hola";

    menu_restaunante();
    cout << "-Ingrese el menu que desea: ";
    cin >> menu;
    cout << "-La cantidad de dinero que disponga: ";
    cin >> dinero;
    elecciones_menu(menu, dinero);

    return 0;
}
