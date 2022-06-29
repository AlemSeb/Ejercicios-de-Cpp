#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador=0;
	
	srand(time(NULL)); //genera numero aleatorio
	dato=1+rand()%(100);
	
	do{
		cout<<"digite un numero: ";
		cin>>numero;
		if(numero>dato){
			cout<<"digite un numero menor\n";
		}
		if(numero<dato){
			cout<<"digite un numero mayor\n";
		}
		contador++;
	}while(numero!=dato);
	
	cout<<"Adivinaste el numero en "<<contador<<" intentos";
	system("pause");
	return 0;
}

