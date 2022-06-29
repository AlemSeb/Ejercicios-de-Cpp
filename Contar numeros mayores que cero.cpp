//Contar numeros mayores que cero 

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float num, i=0;
	
	while(num!=0){
		cout<<"Ingrese un numero: ";
		cin>>num;
		if(num>0){
			i++;
		}
	}
	
	cout<<"Usted digito "<<i<<" numeros mayores que cero.";
	
	getch();
	return 0;
}
