//Ejercicio 2

#include<iostream>
#include<conio.h>


using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	
}a1,a2,a3;

int main(){

	cout<<"Nombre del alumno: ";
	cin.getline(a1.nombre,20,'\n');
	cout<<"Edad del alumno: ";
	cin>>a1.edad;
	cout<<"promedio del alumno: ";
	cin>>a1.promedio;
	fflush(stdin);
	cout<<"Nombre del alumno: ";
	cin.getline(a2.nombre,20,'\n');
	cout<<"Edad del alumno: ";
	cin>>a2.edad;
	cout<<"promedio del alumno: ";
	cin>>a2.promedio;
	fflush(stdin);
	cout<<"Nombre del alumno: ";
	cin.getline(a3.nombre,20,'\n');
	cout<<"Edad del alumno: ";
	cin>>a3.edad;
	cout<<"promedio del alumno: ";
	cin>>a3.promedio;

	if(a1.promedio>a2.promedio){
		if(a1.promedio>a3.promedio){		
			cout<<"Nombre del alumno: ";
			cout<<a1.nombre<<endl;
			cout<<"Edad del alumno: ";
			cout<<a1.edad<<endl;
			cout<<"promedio del alumno: ";
			cout<<a1.promedio<<endl;
		}
	}
	if(a2.promedio<a3.promedio){
		cout<<"Nombre del alumno: ";
		cout<<a3.nombre<<endl;
		cout<<"Edad del alumno: ";
		cout<<a3.edad<<endl;
		cout<<"promedio del alumno: ";
		cout<<a3.promedio<<endl;
	}else{
		cout<<"Nombre del alumno: ";
		cout<<a2.nombre<<endl;
		cout<<"Edad del alumno: ";
		cout<<a2.edad<<endl;
		cout<<"promedio del alumno: ";
		cout<<a2.promedio<<endl;
	}
	

	getch();
	return 0;
}
