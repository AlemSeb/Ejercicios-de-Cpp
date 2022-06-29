//metodo burbuja

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[]={4,1,8,9,2};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	getch();
	return 0;
}
