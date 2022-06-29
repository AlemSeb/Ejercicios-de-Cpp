//copiar datos a otra matriz
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[100][100],numeros1[100][100],filas,columnas;
	
	do{
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	}while(filas!=columnas);
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]= ";
			cin>>numeros[i][j];
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
	
	getch();
	return 0;
}
