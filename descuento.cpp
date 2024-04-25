#include <iostream>
using namespace std;
int main (){
	//se realiza un descuento a una orenda del 20% por compras mayores o iguales a 20000
    float pre;
	float des; 
	
	cout<<"dame un valor \n"; cin>>pre;

	
	if (pre>=20000)
	des=pre*20/100;
	pre=pre-des;
	cout<<pre<<endl;
	
	system("pause");
}
