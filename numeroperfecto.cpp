#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void numeroperfecto(int);
int main(){
	int n;
	
	cout<<"dame un numero y te dire si es perfecto: "; cin>>n;
	numeroperfecto(n);
	getch();
}

void numeroperfecto (int n){
	int suma;
	int i;
	
	for (i=1; i<n; i++)
	{
		if (n%i==0){
		suma=suma+i;	
		}
	}
	if (suma==n){
		cout<<"el numero "<<n<<" es perfecto ";
	}else if (suma!=n){
		cout<<"el numero no es perfecto";
	}
}