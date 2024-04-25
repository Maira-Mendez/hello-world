#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  char letras[10];
  int i,x,j,aux;

  for(i=0; i<10; i++){
  cout<<"dame una letras: "; cin>>letras[i];
    }
for (j=0; j<10; j++){
  for (x=0; x<10;x++){
    if (letras[x]>letras[x+1]){
      aux= letras[x];
      letras[x]=letras[x+1];
      letras[x+1]= aux;
}   
}
}
  cout<<"orden ascendente: ";
  for(j=0;j<10;j++){
    cout<<letras[j];
  }
  getch();
}
