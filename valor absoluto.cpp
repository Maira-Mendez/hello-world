#include  <iostream>
#include <conio.h>

using namespace std;

void valorabsoluto (int n);
int main(){
	int n;
	cout<<"dime un numero entero y te dire el valor absoluto: "; cin>>n;
	valorabsoluto(n);
		getch();
		return 0;	
}

void valorabsoluto (int n){
	if (n>0){
		cout<<"el valor absoluto es: "<<n;
	} else if (n<0){
		n=n*-1;
		cout<<"el valor absoluto es: "<<n;
	}
	
}