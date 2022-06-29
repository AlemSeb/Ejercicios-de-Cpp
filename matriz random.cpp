//copiar datos a otra matriz
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int numeros[100][100],numeros1[100][100],filas,columnas;

	srand(time(NULL));
	do{
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	}while(filas!=columnas);
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){

			numeros[i][j]=1+rand()%(10);
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numeros1[i][j]=numeros[i][j];
		}
		
	}
	
		for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
