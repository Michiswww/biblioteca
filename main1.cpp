#include <iostream>
#include "lab5.h"

using namespace std;

int main(){
	
	int nums[]={9,7,1,2,3};
	
	cout << "Arreglo desordenado:"<<endl;
	imprimirarreglo(nums,5);
	
	bubblesort(nums,5);
	
	cout << "Arreglo ordenado:"<<endl;
	imprimirarreglo(nums,5);
	
	int nums1[]={9,7,1,2,3};
	
	cout << "Arreglo desordenado:"<<endl;
	imprimirarreglo(nums1,5);
	
	selectionsort(nums1, 5);
	
	cout << "Arreglo ordenado:"<<endl;
	imprimirarreglo(nums1,5);
	
	int nums2[]={9,7,1,2,3};
	
	cout << "Arreglo desordenado:"<<endl;
	imprimirarreglo(nums2,5);
	
	insertionshort(nums2,5);
	
	cout << "Arreglo ordenado:"<<endl;
	imprimirarreglo(nums2,5);
	
	return 0;
}


