//Escriba un fragmento de programa que intercambie los valores de dos variables.
#include<iostream>
using namespace std;
int main(){
	int x,y,aux;
	cout<<"digite el valor de x: ";cin>>x;
	cout<<"digite el valor de y: ";cin>>y;
	aux=x;
	x=y;
	y=aux;
	cout<<x<<"   "<<y;
	
	return 0;
}
