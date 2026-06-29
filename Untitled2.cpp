#include <iostream>
using namespace std;


int main(){
	
	int tam = 0;
	
	cout<<"Digite el tamaño del arreglo"<<endl;
	cin>>tam;
	
	int arrUno [tam];
	
	for(int i = 0 ; i < tam ; i++){
		arrUno[i]= (i+1)*2;
		
	} 
	
	//impresion
	for(int j = 0 ; j<tam; j++){
		
		cout<<arrUno[j]<<" ";
	}
	
	//la suma de todos los elementos
	int sumAcu = 0;
	
	for(int j = 0 ; j<tam; j++){
		
		sumAc += arrUno[j];
	}
	cout<<"La suma acumulada de los elementos es"<< sumAc<<endl;
	
	//el mayor elemento almacenado
	
	int mayor = arrUno[0];
	
	for(int j = 1 ; j < tam; j++){
		
		if(arrUno[j] > mayor){
			
			mayor = arrUno[j];
		}
	}
	
	cout << "El mayor elemento almacenado es"<< mayor<<endl;
	
	
	
	
	
	
	
	
	
}
