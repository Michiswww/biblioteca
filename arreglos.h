
#ifndef ARREGLOS_H
#define ARREGLOS_H

#define CUADRADO(x) ((x)*(x))

#define PI 3.1416

// #define DEBUG

int sumaarr(int arr[], int n);
int maximo(int arr[], int n);
void cuadradoarr(int arr[],int n);
void imprimirarr(int arr[],int n);
int busquedalineal(int arr[], int n, int objetivo);
int busquedabititerativa(int arr[], int n, int objetivo);
int busquedabitrecursiva(int arr[], int n, int objetivo, int inicio, int fin);
void bubblesort(int arr[], int n);
void selectionsort(int arr[], int n);
void insertionshort(int arr[], int n);
void mergeshort(int arr[], int inicio, int fin);
void merge(int arr[],int inicio, int mit, int fin);
void intercambiar(int &a, int &b);
int particionar(int arr[], int inicio, int fin);
void quicksort(int arr[], int inicio, int fin);

#endif
