//promedio de 4 notas 

#include<iostream>
using namespace std;
int main(){
	float not1,not2,not3,not4,promedio;
	cout<<"Ingrese la nota 1: ";cin>>not1;
	cout<<"Ingrese la nota 2: ";cin>>not2;
	cout<<"Ingrese la nota 3: ";cin>>not3;
	cout<<"Ingrese la nota 4: ";cin>>not4;
	promedio=(not1+not2+not3+not4)/4;
	cout<<"El promedio de las notas de los alumnos es: "<<promedio;
	
	return 0; 
}
