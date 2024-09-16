#include <iostream>
using namespace std;
int main(){
	int a,b;
	int sum=0;
	cin>>a; cin>>b;
	int prim[a][b];
	int seg[a][b];
	if (a!=b){
		cout<<"no es simetrica";
		
	}else{
		
	
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cin>>prim[i][j];
		}
	}
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			seg[i][j]=prim[j][i];
		}
	}
	
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			
			if (prim[i][j]==seg[i][j]){
				
					sum=sum+1;
				
			}
		}
	}
	if (sum==a*a){
		cout<<"si";
	}else {
		cout<<"no";
	}
	}
	
}