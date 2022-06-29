//ejercicio 8

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct persona{
	char nombre[10];
	bool discapacidad;
}per[100],s[100],ns[100];

int main(){
	int n,val,j=0,k=0;
	cout<<"cuantas personas son: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"nombre: ";
		cin.getline(per[i].nombre,10,'\n');
		cout<<"si tiene una discapacidad ingresar 1: ";
		cin>>val;
		if(val!=1){
			per[i].discapacidad=true;
			s[j]=per[i];
			j++;
		}else{
			per[i].discapacidad=false;
			ns[k]=per[i];
			k++;
		}
	}	
	
	cout<<"\n\nPersonas invalidas: \n";
	for(int i=0;i<k;i++){
		cout<<"nombre: "<<ns[i].nombre<<endl;
	}
	
	
	getch();
	return 0;
}

