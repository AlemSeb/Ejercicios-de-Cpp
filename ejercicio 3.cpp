//comparar cadenas

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char palabra1[20];
	char palabra2[20];
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,20,'\n');
	cout<<"Digite otra palabra: ";
	cin.getline(palabra2,20,'\n');
	if(strcmp(palabra1,palabra2)==0){
		cout<<"ambas cadenas son iguales";
	}else{
		if(strcmp(palabra1,palabra2)<0){
			cout<<palabra2 <<" es mayor alfabeticamente.";
		}else{
			cout<<palabra1 <<" es mayor alfabeticamente.";
		}
	}
	
	
	getch();
	return 0;
}
