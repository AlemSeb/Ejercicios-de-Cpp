//Estructura basica en c++

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1={"alejandro",20},
persona2={"alem",19}
;

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	getch();
	return 0;
}
