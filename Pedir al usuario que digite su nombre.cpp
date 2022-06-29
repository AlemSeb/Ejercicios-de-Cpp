//pedir al usuario que digite su nombre

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];
	char nombre2[20];
	cout<<"Digite su nombre: \n";
	cin.getline(nombre,20,'\n');
	strcpy(nombre2,nombre);
	cout<<nombre2<<endl;
	
	
	
	getch();
	return 0;
}
