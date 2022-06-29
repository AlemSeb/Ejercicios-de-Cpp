//minimo comun multiplo 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
 int n, cociente, i=2;
 
 do{
  	cout<<"Digite un numero entero positivo: "; cin>>n;
  	if(n<=0){
   		cout<<"\aUN NUMERO ENTERO POSITIVO."<<endl<<endl;
   		system("pause");
  		 system("cls");
  	}
 	}while(n<=0);
 
 for( i=2;i<=n;i++){
  		do{
     		if(n%i==0){      
    			cociente=(n/i);
    			n=cociente;
    			cout<<i<<" * ";
   			}

  		}while(n%i==0);
 	}
 cout<<"1"<<endl;
 
 cout<<endl;
 system("pause");
 return 0;
}
