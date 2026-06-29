#include "arreglos.h"
#include <stdio.h>
#include <stdlib.h>

// que hubo perrito

int sumaarr(int arr[], int n){
	int suma=0;
	for(int i = 0; i < n; suma += arr[i++]);
	return suma;
}

int maximo(int arr[], int n){
	int max=arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		#ifdef DEBUG
			printf("Maximo: %d\n",max);
		#endif
	}
	return max;
}

int min(int arr[], int n){
	int min=arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		#ifdef DEBUG
			printf("Maximo: %d\n",min);
		#endif
	}
	return min;
}

void cuadradoarr(int arr[],int n){
	for(int i = 0; i < n; i++){
		arr[i] = CUADRADO(arr[i]);
	}
}

void imprimirarr(int arr[],int n){
	for(int i=0; i<n;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
}

int busquedalineal(int arr[], int n, int objetivo){
	for(int i=0;i <n;i++){
		if(arr[i] == objetivo) return i;
	}
	return -1;
}

int busquedabititerativa(int arr[], int n, int objetivo){
	
	int inicio = 0, fin = n-1, mit;
	
	while(inicio <= fin){
		mit = (inicio + fin)/2 ; 
		if(arr[mit] == objetivo) return mit;
		if(arr[mit] < objetivo ) inicio = mit + 1;
		else fin = mit - 1;
		if(inicio > fin) return -1;
	}
}

int busquedabitrecursiva(int arr[], int n, int objetivo, int inicio, int fin){
	
	if(inicio > fin) return -1;
	
	int mit = (inicio +fin)/2;
	if(arr[mit] == objetivo) return mit;
	if(arr[mit] < objetivo) inicio = mit + 1;
	else fin = mit - 1;
	
	busquedabitrecursiva(arr, n, objetivo, inicio, fin);

}

void bubblesort(int arr[], int n){
	
	int aux;
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j < n-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				aux = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] =aux;
			}
		}
	}
}

void selectionsort(int arr[], int n){
	
	int min, minidx;
	
	
	for(int i=0; i < n-1; i++){
		min = arr[i];
		minidx = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < min){
				min = arr[j];
				minidx = j;
			}	
		}
		arr[minidx] = arr[i];
		arr[i] = min;
	}
}

void insertionshort(int arr[], int n){
	int aux;
	for(int i=1; i<n; i++){
		int j = i - 1;
		aux = arr[i];
		while(arr[j] > aux && j != -1){
			arr[j+1]=arr[j--];
			imprimirarr(arr, n);
		}
		arr[j+1] =aux;
		imprimirarr(arr, n);
	}
}

void mergeshort(int arr[], int inicio, int fin){
	
	int mit = (inicio+fin)/2;
	
	if(inicio >= fin)return;
	
	mergeshort(arr,inicio,mit);
	mergeshort(arr,mit +1,fin);
	
	merge(arr,inicio,mit,fin);
}

void merge(int arr[],int inicio, int mit, int fin){
	
	int i,j=0,k = inicio;
	int n1 = mit-inicio+1;
	int n2 = fin-mit;
	
	int *arrizq = (int *)malloc (n1 * 4);
	int *arrder = (int *)malloc (n2 * 4);
	
	for(i=0;i<n1;i++)arrizq[i] = arr[inicio + i];
	for(i=0;i<n2;i++)arrder[i] = arr[inicio + mit + i+ 1];
	
	i=0;
	
	while(i < n1 && j < n2){
		if(arrizq[i] <= arrder[j]){
			arr[k] = arrizq[i];
			i++;
		}
		else{
			arr[k] = arrder[j];
			j++;
		}
		k++;		
	}
	
	while(i < n1)arr[k++] = arrizq[i++];
	while(j < n2)arr[k++] = arrder[j++];
	
	free(arrizq);
	free(arrder);
}

void intercambiar(int &a, int &b){
	int aux = a;
	a = b;	
	b = aux;
}

int particionar(int arr[], int inicio, int fin){
	
	int pivote = arr[fin];
	int i = inicio-1;
	
	for(int j = inicio; j < fin; j++){
		if(arr[j]<=pivote)intercambiar(arr[++i],arr[j]);
	}
	intercambiar(arr[++i],arr[fin]);
	imprimirarr(arr, fin-inicio+1);
	return i;
}


  void quicksort(int arr[], int inicio, int fin){
	int pospivote;
	if(inicio >= fin) return;
	  
	pospivote = particionar(arr,inicio,fin);
  	
	quicksort(arr,inicio,pospivote-1);
  	quicksort(arr,pospivote+1,fin);
  }
  
  
