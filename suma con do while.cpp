#include <iostream>
#include <string>
using namespace std;
int main (){
	int b,c,suma;
	string a;
	a="si";
	
	do{
		cout<<"escribe dos numero \n"; cin>>b; cin>>c;
		suma=b+c;
		cout<<"la suma es: "<<suma;
		cout<<"quieres hacer otra operacion? \n"; cin>>a;
	}while (a=="si");
		
	
}