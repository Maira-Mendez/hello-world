#include <iostream>
#include <conio.h>

using namespace std;

struct equipo{
	int edad;
	double estatura;
	string nombre;
};

void llenar (equipo, equipo, equipo, equipo, equipo);
void menu1 (equipo, equipo, equipo);
void menu2 (equipo, equipo, equipo, equipo);
void menu3 (equipo, equipo, equipo, equipo, equipo);

int main (){	
	equipo p1;
	equipo p2;
	equipo p3;
	equipo p4;
	equipo p5;
	cout<<"\t\t\tBIENVENIDO A LA BASE DE DATOS DEL EQUIPO DE BALONCESTO\n";

	llenar (p1, p2, p3, p4, p5);

}

void llenar (equipo p1, equipo p2, equipo p3, equipo p4, equipo p5){
	int x,z;
	
	do{
		cout<<"1 para llenar la lista\n";
		cout<<"2 para salir \n";
		cin>>z;
		system("cls");
		if (z==1){
			do{
				cout<<"dime cuantos son en el equipo de baloncesto (maximo 5, minimo 3): \n"; 
				cin>>x;
				if (x==3){
					system("cls");
					cout<<"\t\t\t\tPRIMER PARTICIPANTE\n\n";
					cout<<"dime el nombre: "; cin.ignore()>>p1.nombre;
					cout<<"dime la edad: "; cin>>p1.edad;
					cout<<"dime la estatura: "; cin>>p1.estatura;
					getch ();
					system ("cls");
						cout<<"\t\t\t\t SEGUNDO PARCIPIPANTE\n";
						cout<<"dime el nombre: "; cin>>p2.nombre;
						cout<<"dime la edad: "; cin>>p2.edad;
						cout<<"dime la estatura: "; cin>>p2.estatura;
						getch ();
						system ("cls");
							cout<<"\t\t\t\t TERCER PARCIPIPANTE\n";
							cout<<"dime el nombre: "; cin>>p3.nombre;
							cout<<"dime la edad: "; cin>>p3.edad;
							cout<<"dime la estatura: "; cin>>p3.estatura;
							getch ();
							system ("cls");
				
		  			menu1 (p1, p2, p3);
				} else if (x==4){
					system("cls");
					cout<<"\t\t\t\t PRIMER PARTICIPANTE\n\n";
					cout<<"dime el nombre: "; cin>>p1.nombre;
					cout<<"dime la edad: "; cin>>p1.edad;
					cout<<"dime la estatura: "; cin>>p1.estatura;
					getch ();
					system ("cls");
						cout<<"\t\t\t\t SEGUNDO PARCIPIPANTE\n\n";
						cout<<"dime el nombre: "; cin>>p2.nombre;
						cout<<"dime la edad: "; cin>>p2.edad;
						cout<<"dime la estatura: "; cin>>p2.estatura;
						getch ();
						system ("cls");
							cout<<"\t\t\t\t TERCER PARCIPIPANTE\n\n";
							cout<<"dime el nombre: "; cin>>p3.nombre;
							cout<<"dime la edad: "; cin>>p3.edad;
							cout<<"dime la estatura: "; cin>>p3.estatura;
							getch ();
							system ("cls");
								cout<<"\t\t\t\t CUARTO PARCIPIPANTE\n\n";
								cout<<"dime el nombre: "; cin>>p4.nombre;
								cout<<"dime la edad: "; cin>>p4.edad;
								cout<<"dime la estatura: "; cin>>p4.estatura;
								getch ();
								system ("cls");
							menu2 (p1, p2, p3, p4);
				}else if (x==5){
					system ("cls");
					cout<<"\t\t\t\t PRIMER PARTICIPANTE\n\n";
					cout<<"dime el nombre: "; cin>>p1.nombre;
					cout<<"dime la edad: "; cin>>p1.edad;
					cout<<"dime la estatura: "; cin>>p1.estatura;
					getch ();
					system ("cls");
						cout<<"\t\t\t\t SEGUNDO PARCIPIPANTE\n\n";
						cout<<"dime el nombre: "; cin>>p2.nombre;
						cout<<"dime la edad: "; cin>>p2.edad;
						cout<<"dime la estatura: "; cin>>p2.estatura;
						getch ();
						system ("cls");
							cout<<"\t\t\t\t TERCER PARCIPIPANTE\n\n";
							cout<<"dime el nombre: "; cin>>p3.nombre;
							cout<<"dime la edad: "; cin>>p3.edad;
							cout<<"dime la estatura: "; cin>>p3.estatura;
							getch ();
							system ("cls");
								cout<<"\t\t\t\t CUARTO PARCIPIPANTE\n\n";
								cout<<"dime el nombre: "; cin>>p4.nombre;
								cout<<"dime la edad: "; cin>>p4.edad;
								cout<<"dime la estatura: "; cin>>p4.estatura;
								getch ();
								system ("cls");
									cout<<"\t\t\t\t QUINTO PARCIPIPANTE\n\n";
									cout<<"dime el nombre: "; cin>>p5.nombre;
									cout<<"dime la edad: "; cin>>p5.edad;
									cout<<"dime la estatura: "; cin>>p5.estatura;
									getch ();
									system ("cls");
				
						menu3 (p1, p2, p3, p4, p5);
				}else if (x<3 || x>5){
					cout<<"numero invalido, vuelve a intentar:\n";
				}
	break;
			}while(x!=5);
		}else if (z<1 || z>2){
			cout<<"valor incorrecto "<<endl;
		}	
	}while(z!=2);
}


void menu1 (equipo p1, equipo p2, equipo p3){
	int x;
	double aux;
	char aux1[11];
	do{
		system("cls");
		cout<<"dime como quieres la lista: \n\n";
		cout<<"1 para oden alfabetico. \n";
		cout<<"2 para orden de edad. \n";
		cout<<"3 para orden de estatura. \n";
		cout<<"4 para salir. \n";
		cin>>x;
		 if(x==2){
			if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
			}
				if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
				}	
			
			
			cout<<"la lista por orden de edad es: \n\n";
			cout<<"1) "<<p1.edad<<endl;
			cout<<"2) "<<p2.edad<<endl;
			cout<<"3) "<<p3.edad<<endl;
			getch();
		} else if(x==3){
			if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
			}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}	
			
			
			cout<<"la lista por orden de estatura es: \n\n";
			cout<<"1) "<<p1.estatura<<endl;
			cout<<"2) "<<p2.estatura<<endl;
			cout<<"3) "<<p3.estatura<<endl;
			getch();
		}else if(x>4){
			cout<<"numero incorrecto\n";
		}


	
}while (x!=4);

}
	
	


void menu2 (equipo p1, equipo p2, equipo p3, equipo p4)
{
	int x;
	double aux;
	char aux1[11];
	do{
		system("cls");
		cout<<"dime como quieres la lista: \n\n";
		cout<<"1 para oden alfabetico. \n";
		cout<<"2 para orden de edad. \n";
		cout<<"3 para orden de estatura. \n";
		cout<<"4 para salir. \n";
		cin>>x;
		/*if (x==1){
			if (p1.nombre[0]>p2.nombre[0]){
				aux1=p1.nombre;
				p1.nombre=p2.nombre;
				p2.nombre=aux1;
				if (p2.nombre[0]>p3.nombre[0]){
					aux1=p2.nombre;
					p2.nombre=p3.nombre;
					p3.nombre=aux1
				}
				if (p1.nombre[0]>p2.nombre[0]){
				aux1=p1.nombre;
				p1.nombre=p2.nombre;
				p2.nombre=aux1;
				}	
			}
			cout<<"la lista por orden alfabetico es: \n\n";
			cout<<"1 "<<p1.nombre<<endl;
			cout<<"2 "<<p2.nombre<<endl;
			cout<<"3 "<<p3.nombre<<endl;
		}else */if(x==2){
			if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
			}
				if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
				}
				if (p3.edad>p4.edad){
					aux=p3.edad;
					p3.edad=p4.edad;
					p4.edad=aux;
				}if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
				}	
			
			cout<<"la lista por orden de edad es: \n\n";
			cout<<"1) "<<p1.edad<<endl;
			cout<<"2) "<<p2.edad<<endl;
			cout<<"3) "<<p3.edad<<endl;
			cout<<"4) "<<p4.edad<<endl;
			getch();
		} else if(x==3){
			if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
			}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}	
				if (p3.estatura>p4.estatura){
					aux=p3.estatura;
					p3.estatura=p4.estatura;
					p4.estatura=aux;				
				}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}	
			
			
			cout<<"la lista por orden de edad es: \n\n";
			cout<<"1) "<<p1.estatura<<endl;
			cout<<"2) "<<p2.estatura<<endl;
			cout<<"3) "<<p3.estatura<<endl;
			cout<<"4) "<<p4.estatura<<endl;
			getch();
		}else if(x>4){
			cout<<"numero incorrecto\n";
		}
		
	}while (x!=4);	
	
}

void menu3 (equipo p1, equipo p2, equipo p3, equipo p4, equipo p5){
	int x;
	double aux;
	char aux1[11];
	do{
		system("cls");
		cout<<"dime como quieres la lista: \n\n";
		cout<<"1 para oden alfabetico. \n";
		cout<<"2 para orden de edad. \n";
		cout<<"3 para orden de estatura. \n";
		cout<<"4 para salir. \n";
		cin>>x;
		/*if (x==1){
			if (p1.nombre[0]>p2.nombre[0]){
				aux1=p1.nombre;
				p1.nombre=p2.nombre;
				p2.nombre=aux1;
				if (p2.nombre[0]>p3.nombre[0]){
					aux1=p2.nombre;
					p2.nombre=p3.nombre;
					p3.nombre=aux1
				}
				if (p1.nombre[0]>p2.nombre[0]){
				aux1=p1.nombre;
				p1.nombre=p2.nombre;
				p2.nombre=aux1;
				}	
			}
			cout<<"la lista por orden alfabetico es: \n\n";
			cout<<"1 "<<p1.nombre<<endl;
			cout<<"2 "<<p2.nombre<<endl;
			cout<<"3 "<<p3.nombre<<endl;
		}else */if(x==2){
			if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
			}
				if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
				}
				if (p3.edad>p4.edad){
					aux=p3.edad;
					p3.edad=p4.edad;
					p4.edad=aux;
				}if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
					aux=p1.edad;
					p1.edad=p2.edad;
					p2.edad=aux;
				}
				if (p5.edad>p4.edad){
					aux=p5.edad;
					p5.edad=p4.edad;
					p4.edad=aux;	
				}if (p3.edad>p4.edad){
					aux=p3.edad;
					p3.edad=p4.edad;
					p4.edad=aux;
				}if (p2.edad>p3.edad){
					aux=p2.edad;
					p2.edad=p3.edad;
					p3.edad=aux;
				}
				if (p1.edad>p2.edad){
				aux=p1.edad;
				p1.edad=p2.edad;
				p2.edad=aux;
				}
				
			cout<<"la lista por orden de edad es: \n\n";
			cout<<"1) "<<p1.edad<<endl;
			cout<<"2) "<<p2.edad<<endl;
			cout<<"3) "<<p3.edad<<endl;
			cout<<"4) "<<p4.edad<<endl;
			cout<<"5) "<<p5.edad<<endl;
			getch();
		} else if(x==3){
			if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
			}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}	
				if (p3.estatura>p4.estatura){
					aux=p3.estatura;
					p3.estatura=p4.estatura;
					p4.estatura=aux;				
				}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}
				if (p5.estatura>p4.estatura){
					aux=p5.estatura;
					p5.estatura=p4.estatura;
					p4.estatura=aux;
				}if (p3.estatura>p4.estatura){
					aux=p3.estatura;
					p3.estatura=p4.estatura;
					p4.estatura=aux;				
				}
				if (p2.estatura>p3.estatura){
					aux=p2.estatura;
					p2.estatura=p3.estatura;
					p3.estatura=aux;
				}
				if (p1.estatura>p2.estatura){
				aux=p1.estatura;
				p1.estatura=p2.estatura;
				p2.estatura=aux;
				}	
			
			
			cout<<"la lista por orden de edad es: \n\n";
			cout<<"1) "<<p1.estatura<<endl;
			cout<<"2) "<<p2.estatura<<endl;
			cout<<"3) "<<p3.estatura<<endl;
			cout<<"4) "<<p4.estatura<<endl;
			cout<<"5) "<<p5.estatura<<endl;
			
			getch();
		}else if(x>4){
			cout<<"numero incorrecto\n";
		}
			
	}while (x!=4);	

}

	
	
	
