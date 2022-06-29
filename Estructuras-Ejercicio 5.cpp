//Ejercicio 5

#include<iostream>
#include<conio.h>
using namespace std;
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumno1;

int main(){
	float promedio;
	cout<<"Nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"sexo: ";
	cin.getline(alumno1.sexo,20,'\n');
	cout<<"edad: ";
	cin>>alumno1.edad;
	
	cout<<"Notas del alumno: ";
	cout<<"nota1: ";
	cin>>alumno1.prom.nota1;
	cout<<"nota2: ";
	cin>>alumno1.prom.nota2;
	cout<<"nota3: ";
	cin>>alumno1.prom.nota3;
	
	promedio=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\nDatos del Alumno\n";
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	
	getch();
	return 0;
}
