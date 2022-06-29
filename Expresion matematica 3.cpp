//realice la siguiente operacion matematica (a+(b/c))/(d+(e/f))

#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,e,f, result=0;
	cout<<"digite el primer numero: "; cin>>a;
	cout<<"digite el segundo numero: "; cin>>b;
	cout<<"digite el tercer numero: "; cin>>c;
	cout<<"digite el cuarto numero: "; cin>>d;
	cout<<"digite el quinto numero: "; cin>>e;
	cout<<"digite el sexto numero: "; cin>>f;
	result=(a+(b/c))/(d+(e/f));
	cout<<"el resultado es: "<<result;
	
	return 0;
}
