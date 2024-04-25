#include <iostream>
using namespace std;
int main() {
double operacion4;
float A;
float B;
float C;

	cout<<"el resultado de (2+(3/(2+3+3/4)))/(2+(3/4+2)) es: \n";
	A=2;
	B=3;
	C=4;
	operacion4=(A+(B/(A+B+B/C)))/(A+(B/C+A));
	cout<<operacion4<<"\n";
	
	system("pause");	
	
}