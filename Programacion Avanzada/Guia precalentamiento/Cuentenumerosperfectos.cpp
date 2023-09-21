/*Desarrolle un programa que lea un número entero n seguido por otros n números enteros 
e imprima cuántos entre ellos son perfectos.
Un número numero es perfecto si la suma de sus divisores menos él mismo da numero 
(https://es.wikipedia.org/wiki/N%C3%BAmero_perfecto).
Su equipo ya había desarrollado una solución, pero en un lenguaje de programación interpretado
en que no se declara los tipos de variables locales, de parámetros de funciones 
(esto incluye no poner los corchetes cuando un parámetro corresponde a un arreglo), 
ni de valores devueltos por funciones. Ahora, para mejorar la eficiencia del programa, 
se necesita implementarlo en C++. Lamentablemente, usted es el único de su equipo que entiende de estas cosas.
Su equipo, con su mejor esfuerzo, tradujo su programa a lo que entienden que sería C++... 
Pero todavía le faltan los detalles indicados anteriormente. 
El resultado del trabajo de su equipo está disponible en el IDE. 
Usted debe corregir el código, sin modificar su lógica, sólo agregando los tipos y corchetes donde sea necesario.*/
#include <iostream>

using namespace std;

leer_numeros(n, numeros) {
  // Esta función lee los n números a analizar ingresados por el usuario.
  for (i=0; i<n; i++) {
    cin >> numeros[i];
  }
}

buscar_divisores(numero, es_divisor) {
  // Esta función deja en cada posición i del arreglo es_divisor 
  // un 1 si i numero es un múltiplo de i y un 0 eoc.
  for (i=1; i<numero; i++) {
    if (numero % i == 0) {
      es_divisor[i] = 1;
    } else {
      es_divisor[i] = 0;      
    }
  }
}

sumar_seleccionados(numero, seleccionados) {
  // Esta función devuelve la suma de los i 
  // que tienen un 1 en la posición respectiva en el arreglo seleccionados.
  res = 0;
  for (i=1; i<numero; i++) {
    res += i * seleccionados[i];
  }
  return res;
}

es_perfecto(numero) {
  // Esta función devuelve un 1 si numero es un número perfecto y 0 eoc.
  res;
  es_divisor[numero];
  buscar_divisores(numero, es_divisor);
  res = (sumar_seleccionados(numero, es_divisor) == numero ? 1 : 0);
  return res;
}

contar_perfectos(n, numeros) {
  // Esta función devuelve la cantidadad de números perfectos presentes 
  // en el arreglo numeros.
  res = 0;
  for (i=0; i<n; i++) {
    res += es_perfecto(numeros[i]);
  }
  return res;
}

main() {
  
  n;  
  cin >> n; 
  numeros[n];
  leer_numeros(n, numeros);
  cout << contar_perfectos(n, numeros);

  return 0;
}