//longitud de cadenas 

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="hola que tal";
	int longitud=0;
	
	longitud=strlen(palabra);
	
	cout<<"numero de digitos de la cadena es: "<<longitud<<endl;
	
	
	getch();
	return 0;
}
