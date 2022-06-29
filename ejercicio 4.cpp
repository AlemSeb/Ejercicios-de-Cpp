//concatenar cadenas
	
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
int main(){
	char palabra1[]="Hola que tal ";
	char palabra2[20];
	char palabra3[30];
	cout<<"como te llamas?\n";
	cin.getline(palabra2,20,'\n');
	strcpy(palabra3,palabra1);
	strcat(palabra3,palabra2);
	cout<<palabra3<<endl;
	
	getch();
	return 0;
} 
