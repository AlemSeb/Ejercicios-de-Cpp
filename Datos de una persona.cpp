/* Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
edad:
sexo:
Altura:

Luego de leer los datos, el programa debe mostrar en pantalla*/

#include<iostream>
using namespace std;

int main(){
	int edad;
	float altura;
	char sexo[10];
	
	cout<<"digite tu edad: ";cin>>edad;
	cout<<"digite su sexo: ";cin>>sexo;
	cout<<"digite su altura: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad;
	cout<<"\nSexo: "<<sexo;
	cout<<"\nAltura: "<<altura;
	
	return 0;
}
