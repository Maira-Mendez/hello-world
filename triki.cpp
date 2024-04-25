#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
void llenar (char juego [3][3]);
void mostrar (char juego [3][3]);
void loop (char juego[3][3]);
void yo (char juego[3][3]);
void otro (char juego[3][3]);
int ganador (char juego [3][3]);

int main(){
char juego [3][3];

loop (juego);

}

void loop (char juego[3][3]){
//llenar (juego);
//mostrar (juego);
//yo (juego);
//mostrar (juego);
//otro (juego);
//mostrar (juego);

int *puntero;
int i=0, y;
llenar (juego);
do{
system ("cls");
mostrar (juego);

if (i%2==0){

yo (juego);
}else{

otro (juego);
}

y=ganador(juego);

i++;
}while (1<=9 and y==2);

system ("cls");
mostrar (juego);

if (y==0){
cout<<"el jugador 1 ha ganado y la direccion de memoria es: ";
puntero=&y;
cout<<puntero;
}else if(y==1){
cout<<"el jugador dos ha ganado y la direccion de memoria es: ";
puntero=&y;
cout<<puntero;
}else{
cout<<"han quedado empatados";
}
}

void llenar (char juego [3][3]){

for (int i=0; i<3; i++){
for (int j=0; j<3; j++){

juego [i][j]='A';
}
}
}

void mostrar (char juego [3][3]){
for (int i=0; i<3; i++){
for (int j=0; j<3; j++){
if (j<2){
cout<<juego [i][j]<<"|";
}
else{
cout<<juego [i][j];
}
//cout<<""juego [i][j];
}
if (i<2){
cout<<"\n_____\n";
}
cout<<"\n";
}
cout<<"\n";
}


void yo (char juego[3][3]){

    int i, j, k;
    char f;
   
    do {

        do{

            cout<<" Coloca una ficha en una posicion del 1 al 9: ";
            cin>>f;
            cout<<"\n";
           
         }while (f<'1'||f>'9');
        k=0;
        switch (f) {

            case'1':{
                 i=0;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n";
            }
                break ;
        }
        case'2':{
                i=0;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"la casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'3':{
                i=0;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'4':{
                 i=1;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'5':{
                 i=1;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'6':{
                i=1;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                     cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'7':{
                i=2;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'8':{
                i=2;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'9':{
                i=2;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                     cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
               
                break ;
        }
}
           
     }while (k==1);
     
     juego[i][j]='X';
 }
 
 
 
 void otro (char juego[3][3]){

    int i, j, k;
    char f;
    cout<<"\t\t\t\t\t ES MOMENTO DEL JUGADOR DOS!!\n";
    do {

        do{

           
cout<<"coloca una ficha en una posicion del 1 al 9: ";
            cin>>f;
            cout<<"\n";
         }while (f<'1'||f>'9');
        k=0;
        switch (f) {

            case'1':{
                 i=0;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'2':{
                i=0;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"la casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'3':{
                 i=0;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'4':{
                 i=1;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'5':{
                 i=1;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'6':{
                i=1;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                     cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'7':{
                i=2;
                j=0;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'8':{
                i=2;
                j=1;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                    cout<<" La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
                break ;
        }
        case'9':{
                i=2;
                j=2;
                 if (juego[i][j]=='X'||juego[i][j]=='O' ){
                     k = 1 ;
                     cout<<"La casilla esta ocupada ! Intentalo con otro numero !! \n\n";
            }
               
                break ;
        }
}
           
     }while (k==1);
     
     juego[i][j]='O';
 }
 
 int ganador ( char juego [3][3]){
 
  if (juego[0][0]=='X'||juego[0][0]=='O'){


  if (juego[0][0]==juego[0][1] and juego[0][0]==juego[0][2] ){

  if (juego [0][0]=='x'){
  return 0;
  }else{
return 1;
}
  }
 
  if (juego[0][0]==juego[1][0] and juego[0][0]==juego[2][0] ){

  if (juego [0][0]=='x'){
  return 0;
  }else{
return 1;
}
  }
}
 
  if (juego[1][1]=='X'||juego[1][1]=='O'){
  if (juego[1][1]==juego[0][0] and juego [1][1]==juego[2][2]){

  if (juego [1][1]=='x'){
  return 0;
  }else{
return 1;
}
}
if (juego[1][1]==juego[1][0] and juego [1][1]==juego[1][2]){

  if (juego [1][1]=='x'){
  return 0;
  }else{
return 1;
}
}
if (juego[1][1]==juego[0][1] and juego [1][1]==juego[2][1]){

  if (juego [1][1]=='x'){
  return 0;
  }else{
return 1;
}
}
if (juego[1][1]==juego[0][2] and juego [1][1]==juego[2][0]){

  if (juego [1][1]=='x'){
  return 0;
  }else{
return 1;
}
}
}

if (juego[2][2]=='x'||juego[2][2]=='O'){
if (juego[2][2]==juego[2][1] and juego [1][1]==juego[2][0]){
  if (juego [2][2]=='x'){
  return 0;
  }else{
return 1;
}
}
if (juego[2][2]==juego[1][2] and juego [1][1]==juego[0][2]){
  if (juego [2][2]=='x'){
  return 0;
  }else{
return 1;
}
}
}
return 2;
 } 
