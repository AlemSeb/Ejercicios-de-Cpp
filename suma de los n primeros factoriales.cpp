//suma de factorial
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,facto=1,suma=0;
	cout<<"ingresar numero: ";
	cin>>n;

	for(int i=1;i<=n;i++){
		facto *=i;
		suma +=facto;
	}

	
	
	cout<<"el valor de la suma de los factoriales del numero "<<n<<" es:"<<suma;
	
	getch();
	return 0;
}
