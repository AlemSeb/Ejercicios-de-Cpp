//cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="alem";
	char palabra2[]={'a','l','e','m'};
	
	char nombre[30];
	
	cout<<"digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;
	cout<<palabra<<endl;
	cout<<palabra2;
	
	
	getch();
	return 0;
}
