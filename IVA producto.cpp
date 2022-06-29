/*Ejercicio 1: Escriba un programa que lea  de la entrada estandar el
precio de un producto y muestre en la slida estandar el precio del
producto al aplicarle el IVA */

#include <iostream>
using namespace std;
int main(){
	int n1;
	float IVA=1.16, resultado;
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>n1;
	resultado=n1*IVA; 
	cout<<"El Precio final es: "<<resultado;
	return 0;
}
