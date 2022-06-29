//si es positivo o negativo
#include<iostream>
using namespace std;
int main(){
	float n1;
	cout<<"ingrese un numero: ";cin>>n1;
	if(n1==0){
		cout<<"El numero es cero";
	}else{
		if(n1<0){
			cout<<"El numero es negativo";
		}else{
			cout<<"El numero es positivo";
		}
	}
	
	return 0;
}
