//serie 1.0
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,suma=0,resta=0;
	cout<<"Ingrese un numero: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		suma +=i;
		i++;
	}
	for(int i=2;i<=n;i++){
		resta +=i;
		i++;
	}
	
	cout<<"la respuesta de la serie 1-2+3-4+5....n es: "<<suma-resta;
	
	getch();
	return 0;
}
