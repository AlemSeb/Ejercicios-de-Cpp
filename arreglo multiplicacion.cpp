/*programa que calcule la multiplicacion
acumulada de sus elementos*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int mult=1;
	
	for(int i=0;i<=4;i++){
		mult=mult*numeros[i];
	}
	
	cout<<"la multiplicacion del vector es: "<<mult<<endl;
	
	getch();
	return 0;
}
