//cadena de caracteres condicional de longitud

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[30];
	int tam;
	cout<<"digite una palabra: "<<endl;
	cin.getline(cadena,30,'\n');
	
	tam=strlen(cadena);
	if(tam<=10){
		cout<<cadena;
	}else{
		cout<<"lo siento, la palabra sobrepasa los 10 caracteres.";
	}
	
	getch();
	return 0;
}
