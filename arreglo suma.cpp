//Arreglos vectores Array

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int suma=0;
	
	for(int i=0;i<=4;i++){
		suma=suma+numeros[i];
	}
	
	cout<<"la suma del vector es: "<<suma<<endl;
	
	getch();
	return 0;
}
