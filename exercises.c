#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size){ 
//se asigna como valor maximo el valor del primer espacio del arreglo
  int maximo = arr[0];
//se avanza de uno en uno cada espacio del arreglo y se verifica si el valor en ese espacio es mayor se reemplaza el maximo por el valor en ese espacio hasta llegar al final del arreglo
  for (int i = 0 ; i < size ; i++){
    if(arr[i] > maximo){
    maximo = arr[i];
    }
  }
  return maximo;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) {
  int i = 0;
  int j = size-1;
  //contadores para ir cambiando posiciones desde los extremos del arreglo hacia el centro
  while(i<j){
  //sustitucion de los valores con ayuda de un auxiliar
    int aux = arr[i];
    arr[i]=arr[j];
    arr[j]=aux;
  //acerca los contadores
    i++;
    j--;
  }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) {
  //contar la cantidad de datos pares en el arreglo para establecer el tamaño del arreglo de los numeros pares
  int cantidad = 0;
  for (int i=0;i<size;i++){
    if((arr[i]%2) == 0){
      cantidad++;
    }
  }
  int *pares= (int*)malloc(cantidad * sizeof(int));
  //se lee cada valor del arreglo original y se pasa el valor a un nuevo espacio del nuevo arreglo solo si es par
  int j=0;
  for(int i=0;i<size;i++){
    if((arr[i]%2) == 0){
      pares[j] = arr[i];
      j++;
    }
  }
  *newSize = cantidad;
  return pares;
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,
                       int result[]) 
{
  int i=0, j=0, k=0;
  //se comparando en ambos arreglos y se pasa el menor dato al arreglo fusion
  while(i<size1 && j<size2){
    if(arr1[i]<arr2[j]){
      result[k]=arr1[i];
      i++;
    }
    else{
      result[k]=arr2[j];
      j++;
    }
    k++;
  }
  //en cierto punto si un arreglo es mas grande que otro, hay que pasar el resto de los datos al arreglo fusion
  while(i<size1){
    result[k]=arr1[i];
    i++;
    k++;
  }
  while(j<size2){
    result[k]=arr2[j];
    j++;
    k++;
  }
  
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) { return -2; }

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
