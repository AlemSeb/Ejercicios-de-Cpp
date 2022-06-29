//dato cuya suma de los otros datos es igual a dicho dato arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n,mayor=0,suma=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<i+1<<".- digite el numero: ";
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	for(int i=0;i<n;i++){
		suma=suma+numeros[i];
	}

	suma -=mayor;
	if(suma==mayor){
		cout<<"si existe un numero en el vector cuyo valor equivale a la suma del resto";
		cout<<" "<<mayor;
	}
	
	
	getch();
	return 0;
}
