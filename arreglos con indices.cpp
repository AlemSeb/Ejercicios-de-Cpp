/*Mostrar arreglos con indices asociados 
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"digite el numero de elementos que tendra el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"digite el numero: ";
		cin>>numeros[i];
	}
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<"\n";
	}
	
	getch();
	return 0;
}
