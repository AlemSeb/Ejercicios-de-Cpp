//sumatoria hasta 2n+1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma=0;
	cout<<"Hasta que numero desea sumar los impares?\n ";
	cin>>n;
	for(int i=1;i<=n;i++){
		suma +=i;
		i++;
	}
	cout<<"la suma es: "<<suma;
	
	getch();
	return 0;
}
