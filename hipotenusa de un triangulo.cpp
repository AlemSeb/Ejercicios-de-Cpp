/*Escriba un programa que lea de la entrada estándar los dos catetos
de un triangulo rectangulo y escriba en la salida su hipotenusa*/
#include<iostream>//entrada y salida de datos
#include<math.h>//operadores matematicos 
using namespace std;
int main(){
	float cat1,cat2,hipo;
	cout<<"Primer cateto: ";cin>>cat1;
	cout<<"Segundo cateto: ";cin>>cat2;
	cat1 *=cat1;
	cat2 *=cat2;
	hipo=sqrt(cat1+cat2);
	cout<<"la hipotenusa es: "<<hipo;
	
	return 0; 
}
