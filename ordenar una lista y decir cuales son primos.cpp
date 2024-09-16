#include <iostream>

using namespace std;
int main(){
	int num, aux,sum=0,a;
	cout<<"dame la cantidad de numeros que quieres: "; cin>>num;
	int arr[num];
	
	for (int i=0; i<num; i++){
		cin>>arr[i];
	}
	
	for (int i=0; i<num; i++){
		for (int j=0; j<num-1; j++){
			if (arr[j]>arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
	
	for (int i=0; i<num; i++){
		cout<<arr[i];
	}
	cout<<endl<<"los numers primos son: ";
	for (int i=0; i<num; i++){
		a=arr[i];
		for (int j=1; j<=a; j++){
			if (a%j==0){
			sum=sum+1;
			}
		}
		if (sum==2){
			cout<<arr[i];
		}
		sum=0;
	}
	
	
	
}


     	