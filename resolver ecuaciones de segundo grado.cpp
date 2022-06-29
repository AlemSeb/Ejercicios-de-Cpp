//resolver ecuaciones de segundo grado
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c, resp1=0,resp2=0;
	cout<<"ingrese el valor de a: ";cin>>a;
	cout<<"ingrese el valor de b: ";cin>>b;
	cout<<"ingrese el valor de c: ";cin>>c;
	resp1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resp2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"las soluciones de la ecuacion son: "<<resp1<<" y "<<resp2;
	return 0;
}
