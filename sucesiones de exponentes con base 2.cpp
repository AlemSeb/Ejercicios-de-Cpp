//Calcular 2^1+2^2 y asi
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int suma=0, elevacion=0,n;
	cout<<"digite el numero de elemntos a sumar: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		elevacion =pow(2,i);
		suma +=elevacion;
	}
	
	cout<<"la suma es: "<<suma;
	
	getch();
	return 0;
}
