/*calcule la funcion f(x,y)=raiz(x)/(y^2-1)*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float x,y,result=0;
	cout<<"digite el valor de x: ";cin>>x;
	cout<<"digite el valor de y: ";cin>>y;
	result=(sqrt(x))/(pow(y,2)-1);
	cout<<"el resultado de la funcion es: "<<result;
	return 0;
}
