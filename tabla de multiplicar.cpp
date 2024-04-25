#include <iostream>
#include <conio.h>
using namespace std;

void tablademultiplicar (int x);

int main (){
	int x;
	cout<<"dime un numero y te dare la tabla de multiplicar: "; cin>>x;
	tablademultiplicar (x);
	getch();
	return 0;
}

void tablademultiplicar (int x){
	
	for (int i=1; i<11; i++){
	cout<<x<<"*"<<i<<"=";	
	cout<<x*i<<endl;
	}
	
}