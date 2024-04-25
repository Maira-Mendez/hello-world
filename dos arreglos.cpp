#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int arreglo1 [5];
	int arreglo2 [5];
	
	for (int i=0; i<5; i++){
		cout<<"dame un numero pero la posicion "<<i<<" : "; cin>>arreglo1[i];
	}
	system("cls");
	for (int o=0; o<5; o++){
			cout<<"dame un numero pero la posicion "<<o<<" del segundo arreglo : "; cin>>arreglo2[o];
	}
	for (int i=0; i<5; i++){
		for (int o=0; o<5; o++){
			if (arreglo1[i]== arreglo2[o]){
				 cout<<"la posicion: "<<i<<" es igual a la posicion: "<<o;
				 
			}
		}
	}
}