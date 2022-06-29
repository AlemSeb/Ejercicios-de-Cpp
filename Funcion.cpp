#include<iostream>
#include<conio.h>
using namespace std;

int encontrarmax(int x, int y);

int main(){
	int n1,n2,nummax;
	
	cout<<"digite 2 numeros: ";
	cin>>n1>>n2;
	
	nummax=encontrarmax(n1,n2);
	cout<<"el mayor de los 2 numeros es: "<<nummax;
	getch();
	return 0;
}

int encontrarmax(int x, int y){
	int nummax;
	if(x>y){
		nummax=x;
	}else{
		nummax=y;
	}
	
	return nummax;
}
