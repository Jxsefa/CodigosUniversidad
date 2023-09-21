/*Desarrolle un programa que lea la cantidad de notas por analizar n, 
la cantidad de mejores notas que hay que considerar k y las n notas ingresadas por el usuario. 
El programa debe imprimir el promedio simple de las mejores  notas (sin redondear).
Su equipo, con su mejor esfuerzo, desarrolló un programa. 
Sin embargo, todavía le quedan algunos errores que hacen que no cumpla con lo solicitado. 
Usted, con su habilidad para depurar código, es su última esperanza. 
El resultado del trabajo de su equipo está disponible en el IDE. 
Usted debe corregir el código, sin modificar su estructura general,
sólo realizando algunos ajustes menores donde sea necesario.*/
#include <iostream>
#include <cfloat>
#include <iomanip>

using namespace std;

void leer_cantidades(int cantidad_notas, int cantidad_mejores) {
  // Esta función lee las cantidades ingresadas por el usuario
  // y las deja en las variables respectivas.
  cin >> cantidad_notas >> cantidad_mejores;
}

int posicion_minimo(int cantidad, float valores[]) {
  // Esta función devuelve la posición en el arreglo valores 
  // en que se encuentra el valor más bajo.
  int pos = -1;
  float minimo = -FLT_MAX;
  for (int i = 0; i < cantidad; i++) {
    if (valores[i] < minimo) {
      minimo = valores[i];
      pos = i;
    }
  }
  return pos;
}

void registrar_nota(int cantidad_mejores, float notas[], float nota) {
  // Esta función revisa si el valor más bajo en el arreglo notas 
  // es peor que la nueva nota que llega. De ser así, lo reemplaza por la nota.
  int pos;
  pos = posicion_minimo(cantidad_mejores, notas);
  if (notas[pos] > nota) {
    notas[pos] = nota;
  }
}

void leer_notas(int cantidad_notas, int cantidad_mejores, float notas[]) {
  // Esta función lee las cantidad_notas notas ingresadas por el usuario
  // y guarda en el arreglo notas las cantidad_mejores mejores.
  for (int i = 0; i < cantidad_mejores; i++) {
    notas[i] = FLT_MAX;
  }

  for (int i = 0; i < cantidad_notas; i++) {
    float nota;
    cin >> nota;
    registrar_nota(cantidad_mejores, notas, nota);
  }
}

float calcular_promedio(int cantidad, float notas[]) {
  // Esta función devuelve el promedio de las notas recibidas en el arreglo notas.
  float res = 0;
  for (int i = 0; i < cantidad; i++) {
    res += notas[i];
	res /= cantidad;
  }
  return res;
}

void imprimir_nota(float nota) {
  // Esta función imprime la nota recibida.
  cout << fixed << setprecision(1) << nota << endl; 
}

int main() {
  int cantidad_notas, cantidad_mejores;
  float promedio;

  leer_cantidades(cantidad_notas, cantidad_mejores);
  float notas[cantidad_mejores];
  leer_notas(cantidad_notas, cantidad_mejores, notas);
  promedio = calcular_promedio(cantidad_mejores, notas);
  imprimir_nota(promedio);
  return 0;
}