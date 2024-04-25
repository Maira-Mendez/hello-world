#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

bool calcularbisiesto (int x);
int main (){
	int x;
	bool respuesta;
	cout<<"dime un año y te dire si es o no bisiesto: "; cin>>x;
	respuesta=calcularbisiesto(x);
	if (respuesta ==1){
		cout<<"el año si es bisiesto "<<endl;
	}else 
	cout<<"el año no es bisiesto"<<endl; 
	getch();
	return 0;
}

bool calcularbisiesto (int x){
	bool y;
	y=0;
	if (x%4==0){
		y=1;
		return y;
		
	}else{
	return y;
	}
}