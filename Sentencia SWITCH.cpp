//sentencia Switch
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"digite un numero entre 1-5: ";
	cin>>numero;
	
	switch(numero){
		case 1:	cout<<"esta es la opcion 1.";break;
		case 2: cout<<"esta es la opcion 2.";break;
		case 3: cout<<"esta es la opcion 3.";break;
		case 4: cout<<"esta es la opcion 4.";break;
		case 5: cout<<"esta es la opcion 5.";break;
		default: cout<<"no esta dentro del rango";
	}
	
	return 0;
}
