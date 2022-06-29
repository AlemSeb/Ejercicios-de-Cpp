//escribe la siguiente expresion como expresion de c++: a/b+1

#include<iostream>
using namespace std;

int main(){
	float a, b, resultado=0;
	
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	
	resultado= a/b + 1;
	
	cout<<"\nEl resultado es: "<<resultado;
	return 0;
}
