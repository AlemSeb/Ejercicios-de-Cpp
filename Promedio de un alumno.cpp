/*Promedio de notas de un alumno 
primera nota 30% del total 
segunda nota 60% del total 
tercera nota 10% del total */
#include <iostream>
using namespace std;
int main(){
	float nota1,nota2,nota3,promedio=0;
	cout<<"Ingrese primera nota: ";
	cin>>nota1;
	cout<<"Ingrese segunda nota: ";
	cin>>nota2;
	cout<<"Ingrese tercera nota: ";
	cin>>nota3;
	promedio=nota1*0.3+nota2*0.6+nota3*0.1;
	cout<<"El promedio final del alumno es: "<<promedio;
	
	return 0;
}
