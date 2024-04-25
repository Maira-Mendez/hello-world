#include <iostream>
using namespace std;
int main (){
int op;
float a;
float b;
float suma;
float resta;
float multiplicacion;
float division;

cout<<"dime un numero \n"; cin>>a;
cout<<"dime otro numero \n"; cin>>b;
cout<<"selecciona la opcion \n";
cout<<"1 para sumar \n";
cout<<"2 para restar \n";
cout<<"3 para multiplicar \n";
cout<<"4 para dividir \n"; cin>>op;

switch(op){
	case 1: 
	cout<<"suma \n";
	suma=a+b;
	cout<<suma<<"\n";
	break;
	case 2: 
	resta=a-b;
	cout<<resta<<"\n";
	break;
	case 3: 
	multiplicacion=a*b;
	cout<<multiplicacion<<"\n";
	break;
	case 4: 
	division=a/b;
	cout<<division<<"\n";
	break;
	case 5: 
	cout<<"opcion incorrecta \n";
	
}
system("pause");
}