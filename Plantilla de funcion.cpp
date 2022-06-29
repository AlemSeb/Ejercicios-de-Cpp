/*plantilla de funcion
sacar el valor absoluto de un numero*/

#include<iostream>
#include<conio.h>
using namespace std;

template<class Tipod>
void mostrarAbs(Tipod numero);

int main(){
	int num1=-4;
	float num2=-56.34;
	double num3=-123.78965;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	getch();
	return 0;
}
template<class Tipod>
void mostrarAbs(Tipod numero){
	if (numero<0){
		numero=numero*-1;
	}
	cout<<"el valor absoluto del numero es: "<<numero<<endl;
	
}
