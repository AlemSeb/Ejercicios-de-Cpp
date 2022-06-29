//simular cajero con menu 

#include<iostream>
using namespace std;

int main(){
	int saldo=1000, opc,mon;
	cout<<"\tBienvenido al cajero virtual"<<endl;
	cout<<"1.-Ingresar dinero en cuenta"<<endl;
	cout<<"2.-Retirar dinero de la cuenta"<<endl;
	cout<<"3,.Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"cuanto dinero desea ingresar?\n";
			cin>>mon;
			saldo +=mon;
			cout<<"su saldo ahora es de: "<<saldo;
			break;
		case 2:
			cout<<"cuanto dinero desea sacar?\n";
			cin>>mon;
			if(mon<saldo){
				saldo -=mon;
				cout<<"su saldo ahora es de: "<<saldo;
			}else{
				cout<<"no dispone el saldo suficiente";
			}
			break;
		case 3:
			break;
	}
	return 0;
}
