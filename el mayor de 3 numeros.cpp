/*de tres numeros cual es el mayor*/

#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"digite los 3 numeros: ";
	cin>>n1>>n2>>n3;
	if(n1>n2){
		if(n1>n3){
			cout<<"El mayor es: "<<n1;
		}else{
			cout<<"El mayor es: "<<n3;
		}
	}else{
		if(n2>n3){
			cout<<"El mayor es: "<<n2;
		}else{
			cout<<"El mayor es: "<<n3;
		}
	}
	return 0;
}
