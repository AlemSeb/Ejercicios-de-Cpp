//tomar temperatura 

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float temperatura[5],mayor, menor;		
	cout<<"Ingrese La Temperatura: ";
		cin>>temperatura[0];
		menor=temperatura[0];
		mayor=temperatura[0];
	for(int i=1;i<=5;i++){
		cout<<"Ingrese La Temperatura: ";
		cin>>temperatura[i-1];
		if(temperatura[i-1]<menor){
			menor=temperatura[i-1];
		}
		if(temperatura[i-1]>mayor){
			mayor=temperatura[i-1];
		}
	}
	cout<<"la temperatura mayor es: "<<mayor<<" y la menor es: "<<menor;
	
	getch();
	return 0;
}
