//factorial
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,facto=1;
	cout<<"ingresar numero: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		facto *=i;
	}
	
	cout<<"el valor del factorial del numero "<<n<<" es:"<<facto;
	
	getch();
	return 0;
}
