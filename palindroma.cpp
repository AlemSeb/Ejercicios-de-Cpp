//ejercicio 5
	
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	
int main(){
	char cad[20];
	char cad1[20];
	cout<<"ingrese una palabra: \n";
	cin.getline(cad,20,'\n');
	strcpy(cad1,cad);
	strrev(cad);
	if(strcmp(cad,cad1)==0){
		cout<<cad<<" es palindroma."<<endl;
	}else{
		cout<<cad1<<" no es palindroma.";
	}
	
	
	
	
	
	getch();
	return 0;
} 
