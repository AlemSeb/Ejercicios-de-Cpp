//comparar cadenas

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char palabra1[]="hola";
	char palabra2[]="hola";
	if(strcmp(palabra1,palabra2)==0){
		cout<<"ambas cadenas son iguales";
	}else{
		cout<<"ambas cadenas son diferentes";
	}
	
	
	getch();
	return 0;
}
