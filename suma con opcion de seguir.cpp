#include <iostream>
#include <string>
using namespace std;
int main (){
	int b,c;
	string a;
	int suma;
	
	a="si";
	while (a=="si"){
		cout<<"dime dos numeros \n"; cin>>b; cin>>c;
		suma=b+c;
		cout<<"la sumas as: "<<suma<<"\n";
		cout<<"desea hacer otra suma? \n"; cin>>a;
	}

}