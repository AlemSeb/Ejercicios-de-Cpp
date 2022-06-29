//si la edad esta dentro del rango de 18 a 25
#include<iostream>
using namespace std;
int main(){
	int edad;
	cout<<"digite la edad";
	cin>>edad;
	if((edad<=25) && (edad>=18)){
		cout<<"La edad esta dentro del rango [18-25]";
	}else{
		cout<<"La edad no esta dentro del rango [18-25]";
	}
	return 0;
}
