//Ejercicio 7

#include<iostream>
#include<conio.h>
using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main(){
	int n,horas=0,minutos=0,segundos=0;
	
	cout<<"cuantas etapas: ";
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"horas: ";
		cin>>et[i].horas;
		cout<<"minutos:";
		cin>>et[i].minutos;
		cout<<"segundos: ";
		cin>>et[i].segundos;
		
		horas +=et[i].horas;
		minutos +=et[i].minutos;
		if(minutos>=60){
			minutos -=60;
			horas++;
		}
		segundos +=et[i].segundos;
		if(segundos>=60){
			segundos -=60;
			minutos++;
		}
	}
	
	cout<<"\nTiempo total empleado: \n";
	cout<<"Tiempo: "<<horas<<":"<<minutos<<":"<<segundos;
	
	
	
	getch();
	return 0;
}
