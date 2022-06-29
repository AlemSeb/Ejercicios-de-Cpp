//si el numero es igual a los 3 numeros anteriores

#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	cout<<"Digite 3 numeros: ";
	cin>>n1>>n2>>n3;
	cout<<"digite un numero mas: ";
	cin>>n4;
	
	if(n4!=n3){
		if(n4!=n2){
			if(n4!=n1){
				cout<<"el numero no coincide con los anteriores";
			}else{
				cout<<"el numero coincide con los anteriores";
			}	
		}else{
			cout<<"el numero coincide con los anteriores";
		}	
	}else{
		cout<<"el numero coincide con los anteriores";
	}
	
	return 0;
}
