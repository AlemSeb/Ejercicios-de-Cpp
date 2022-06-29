//potencia 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int x,y,potencia=1;
	cout<<"Ingrese la base: ";
	cin>>x;
	cout<<"Ingrese la potencia: ";
	cin>>y;
	
	for(int i=1;i<=y;i++){
		potencia *=x;
	}
	cout<<"el numero elevado a la "<<y<<" es:"<<potencia<<endl;
	
	system("pause");
	return 0;
}

