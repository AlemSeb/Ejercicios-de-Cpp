/*Mostrar el mes del a�o pidiendo numeros del 1 al 12
*/
#include<iostream>
using namespace std;
int main(){
	int mes;
	cout<<"Ingrese un numero del 1 al 12: ";
	cin>>mes;
	switch(mes){
		case 1: cout<<"Es enero";break;
		case 2: cout<<"Es febrero";break;
		case 3: cout<<"Es Marzo";break;
		case 4: cout<<"Es abril";break;
		case 5: cout<<"Es mayo";break;
		case 6: cout<<"Es junio";break;
		case 7: cout<<"Es julio";break;
		case 8: cout<<"Es agosto";break;
		case 9: cout<<"Es septiembre";break;
		case 10: cout<<"Es octubre";break;
		case 11: cout<<"Es noviembre";break;
		case 12: cout<<"Es diciembre";break;
		default: "No es ningun mes"; break;
	}
	return 0;
}
