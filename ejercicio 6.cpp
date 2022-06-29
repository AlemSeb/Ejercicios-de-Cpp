
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[]="aleM";
	char palabra1[]="aLem";
	
	strupr(palabra);
	strupr(palabra1);
	if(strcmp(palabra,palabra1)==0){
		cout<<"las palabras son iguales";
	}else{
		cout<<"las palabras son diferentes";
	}
	
	
	
	getch();
	return 0;
}

