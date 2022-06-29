//sumatoria hasta n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma=0;
	cout<<"Hasta que numero desea sumar?\n ";
	cin>>n;
	for(int i=1;i<=n;i++){
		suma +=i;
	}
	cout<<"la suma es: "<<suma;
	
	getch();
	return 0;
}
