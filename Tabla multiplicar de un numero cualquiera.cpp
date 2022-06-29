//ingrese un numero, a continuacion. muestre la tabla de multiplicar 
//del 1 al 10 de dicho numero 
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	
	do{
	cout<<"ingrese numero: ";
	cin>>num;	
	}while((num<=1)||(num>=10));
	
	
	for(int i=1;i<=10;i++){
		cout<<num<<" X "<<i<<" = "<<i*num<<endl;
		
	}
	
	getch ();
	return 0;
}
