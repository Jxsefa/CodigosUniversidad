#include <iostream>
#include <thread>

using namespace std;

int main(){
    
    //datos jugador
    int vida = 100, monedero = 0;
    int rama = 8, piedra = 10, navaja = 15, arma_valor, opcion; //Plan: agregar otras 2 armas :D op1 botella de leche (?)
    string user, arma, ataque;
    //datos malo >:/ 
    int vidaMalo = 100;
    int ataque1 = 6, ataque2 = 9, ataque3 = 12; 
    
    
    cout<< "Inserte su nombre: "<<endl;
        cin>> user;
    cout<< "Bienvenido/a "<< user << "!" <<endl;
    cout<<" "<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<< " Tu total de corazones: " << vida << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<<" "<<endl;
    
    while (arma!="rama" && arma!="piedra" && arma!="navaja"){
        
    cout<< "Estas siendo atacado." << " " << "¿Con qué te defenderás?"<< endl;
    cout<<" "<<endl;
    cout<< "rama" << " " << "piedra" << " " << "navaja" << endl;
        cin>> arma; 
      
        
    if (arma == "rama"){
        arma_valor = rama;
        cout<<" "<<endl;
        cout<<"Tu arma es: " << arma << ", su daño es " << arma_valor<<"!"<<endl;
    } else if (arma == "piedra"){
        arma_valor = piedra;
        cout<<" "<<endl;
        cout<<"Tu arma es: " << arma << ", su daño es " << arma_valor<<"!"<<endl;
    } else if (arma == "navaja"){
        arma_valor = navaja;
        cout<<" "<<endl;
        cout<<"Tu arma es: " << arma << ", su daño es " << arma_valor<<"!"<<endl;
    } else {
        cout<<" "<<endl;
        cout<< "Arma inválida, elija nuevamente." <<endl;
        cout<<" "<<endl;
    }
    }
    cout<<" "<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<< "Deseas realizar un ataque?" <<endl; 
    cout<< " Opciones: si_  no_  "<<endl;
    cin>> ataque;
    
    if (ataque == "si"){
        vidaMalo = vidaMalo - arma_valor;
        cout<< "Realizas el ataque con éxito!"<<endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout<< "  Daño realizado: " << arma_valor << "!" <<endl;
        cout<<" "<<endl;
        cout<< "  Malo: '-" << arma_valor << " corazones.'" <<endl; 
        cout << "   Vida del malo: " << vidaMalo << "hp." << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout<<" "<<endl;
        cout<< "ganas: +2 monedas."<<endl;
        monedero = monedero + 2;
        cout<< " monedero: "<< monedero<< endl;
    } else if (ataque == "no"){
        cout<< "No has realizado ningún ataque"<<endl;
    }
    cout<<" "<<endl;
    while (opcion != 5){
        
        while (opcion != 5){
        
        cout<< "Deseas relizar otra accion?" <<endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
            cout<< " Opciones: " << endl;
            this_thread::sleep_for(chrono::milliseconds(400));
            cout<< "  1.- Revisar monedero." <<endl;
             this_thread::sleep_for(chrono::milliseconds(400));
            cout<< "  2.- Revisar arma." <<endl;
             this_thread::sleep_for(chrono::milliseconds(400));
            cout<< "  3.- Intentar atacar." <<endl;
            this_thread::sleep_for(chrono::milliseconds(400));
            cout<< "  4.- Estadisticas actuales." <<endl;
             this_thread::sleep_for(chrono::milliseconds(400));
            cout<< "  5.- Salir." <<endl;
            cin>> opcion;
    
        if (opcion == 1){
            cout<<" "<<endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<< " - -Cargando monedero- -"<< endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<<" "<<endl;
            cout<< "-Tu monedero: " << monedero << " monedas." <<endl;
            cout<<" "<<endl;
        } else if (opcion == 2){
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<< " - -Cargando arma- -"<< endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<<" "<<endl;
            cout<< "-Tu arma actual es " <<arma<< " con " << arma_valor << " de daño." <<endl;
            cout<<" "<<endl;
        } else if (opcion == 3){
            cout<<" "<<endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<< "Deseas realizar un ataque?" <<endl; 
            cout<< "  Opciones: si_  no_  "<<endl;
            cin>> ataque;
    
            if (ataque == "si"){
                vidaMalo = vidaMalo - arma_valor;
                    cout<< "Realizas el ataque con éxito!"<<endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                    cout<< "Daño realizado: " << arma_valor << "!" <<endl;
                    cout<<" "<<endl;
                    cout<< "Malo: '-" << arma_valor << " corazones.'" <<endl; 
                    cout << "Vida del malo: " << vidaMalo << "hp." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                    cout<<" "<<endl;
                    cout<< "ganas: +2 monedas."<<endl;
                monedero = monedero + 2;
                    cout<< "monedero: "<< monedero<< endl;
            } else if (ataque == "no"){
                cout<< "No has realizado ningún ataque"<<endl;
                cout<<" "<<endl;
            }
        } else if (opcion == 4){
            cout<<" "<<endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<< " - -Cargando estadisticas- -"<< endl;
            this_thread::sleep_for(chrono::milliseconds(600));
            this_thread::sleep_for(chrono::milliseconds(400));
            cout<<" "<<endl;
            cout << "Tus corazones actuales son " << vida << "." << endl; 
            cout<<" "<<endl;
            this_thread::sleep_for(chrono::milliseconds(400));
            cout << "La vida actual del malo es " << vidaMalo << "hp." << endl;
            cout<<" "<<endl;
        } else {
            cout<<" "<<endl;
            cout << "Hasta luego " << user << "!" << endl;
        }
    
        }
    }
    
    
    //while ()
    //(sumaAtaque>vidaMalo || sumaataqueMalo>vidaMia)

    return 0;
}