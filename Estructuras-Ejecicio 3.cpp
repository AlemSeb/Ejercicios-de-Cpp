//Ejercicio 3

#include<iostream>
#include<conio.h>
using namespace std;

struct empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	float menor=9999,mayor=0;
	int n,posM=0,posm=0;
	cout<<"cuantos empleados son?\n";
	cin>>n;
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Digite su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<"digite su salario: ";
		cin>>emp[i].salario;
		
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
		
		cout<<"\n";
	}
	
	cout<<"\n\nEMPLEADO CON MAYOR SALARIO:\n";
	cout<<"nombre: ";
	cout<<emp[posM].nombre<<endl;
	cout<<"salario: ";
	cout<<emp[posM].salario;
	
	cout<<"\n\nEMPLEADO CON menor SALARIO:\n";
	cout<<"nombre: ";
	cout<<emp[posm].nombre<<endl;
	cout<<"salario: ";
	cout<<emp[posm].salario;
	
	getch();
	return 0;
}
