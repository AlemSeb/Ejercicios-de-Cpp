//concatenar cadenas
	
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
int main(){
	char palabra1[]="esto es una cadena";
	char palabra2[]=" de ejemplo";
	char palabra3[30];
	
	strcpy(palabra3,palabra1);
	strcat(palabra3,palabra2);
	cout<<palabra3<<endl;
	
	getch();
	return 0;
}
	
