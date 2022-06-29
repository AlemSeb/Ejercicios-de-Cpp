//Ejercicio 4

#include<iostream>
#include<conio.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int medallas;
}atl[100];

int main(){
	int menor=9999,mayor=0;
	int n,posM=0,posm=0;
	cout<<"cuantos atletas participan?";
	cin>>n;
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<"Pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout<<"medallas ganadas: ";
		cin>>atl[i].medallas;
		if(atl[i].medallas<menor){
			menor=atl[i].medallas;
			posm=i;
		}
		if(atl[i].medallas>mayor){
			mayor=atl[i].medallas;
			posM=i;
		}
		cout<<endl;
	}	
	
	cout<<"\n\nMAS MEDALLAS:\n";
	cout<<"nombre: "<<atl[posm].nombre<<endl;
	cout<<"Pais: "<<atl[posm].pais<<endl;
	
	getch();
	return 0;
}
