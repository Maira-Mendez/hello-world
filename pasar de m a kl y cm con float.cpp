#include <iostream>
using namespace std;
int main (){
	float a;
	float kilometro;
	float centimetros;
	
	cout<<"dime una cantidad de metros \n"; cin>>a;
	
	kilometro=a/1000;
	centimetros=a*100;
	
	cout<<"en kilometros es: ";cout<<kilometro<<"\n";
	cout<<"en centimetro es: ";cout<<centimetros<<"\n";
	
	system("pause");	
}