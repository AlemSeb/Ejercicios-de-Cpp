//realice la siguiente operacion matematica a+(b/(c-d))

#include<iostream>
using namespace std;
int main(){
	float a,b,c,d, result=0;
	cout<<"digite el primer numero: "; cin>>a;
	cout<<"digite el segundo numero: "; cin>>b;
	cout<<"digite el tercer numero: "; cin>>c;
	cout<<"digite el cuarto numero: "; cin>>d;

	result=a+(b/(c-d));
	cout<<"el resultado es: "<<result;
	
	return 0;
}
