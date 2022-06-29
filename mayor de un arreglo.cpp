//el mayor dato del arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n,mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<i+1<<".- digite el numero: ";
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"el mayor elemento del arreglo es: "<<mayor;
	
	
	getch();
	return 0;
}
