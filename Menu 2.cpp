//Menu 2
#include<iostream>
using namespace std;
int main(){
	int num;
	int opc;
	cout<<"\tMENU\n";
	cout<<"1.-Cubo de un numero.\n";
	cout<<"2.-Numero par o impar.\n";
	cout<<"3.-salir.\n";
	cin>>opc;
	switch(opc){
		case 1:
			cout<<"Ingrese un numero: ";
			cin>>num;
			num =num*num*num;
			cout<<"El cubo del numero es: "<<num;
			break;
		case 2:
			if(num==0){
				cout<<"el numero es 0.";
			}else{
				if (num%2==0){
					cout<<"El numero es par";
				}else{
					cout<<"El numero es impar";
				}	
			}
			break;
		case 3:
			break;
	}
	return 0;
}
