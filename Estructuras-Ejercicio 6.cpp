//Ejercicio 6

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
}alumno[100];

int main(){
	float promedio[100],mayor=0;
	int n,pos;
	cout<<"cuantos alumnos hay? \n";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(alumno[i].nombre,20,'\n');
		cout<<"sexo: ";
		cin.getline(alumno[i].sexo,20,'\n');
		cout<<"edad: ";
		cin>>alumno[i].edad;
		cout<<"Notas del alumno: ";
		cout<<"nota1: ";
		cin>>alumno[i].prom.nota1;
		cout<<"nota2: ";
		cin>>alumno[i].prom.nota2;
		cout<<"nota3: ";
		cin>>alumno[i].prom.nota3;
		promedio[i]=(alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
		
		if(promedio[i]>mayor){
			mayor=promedio[i];
			pos=i;
		}	
	}
	
	
	cout<<"\nDatos del Alumno\n";
	cout<<"Nombre: "<<alumno[pos].nombre<<endl;
	cout<<"Sexo: "<<alumno[pos].sexo<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<promedio[pos]<<endl;
	
	getch();
	return 0;
}
