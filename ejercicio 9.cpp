//ejercicio 9
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[50];
	int a=0,e=0,i=0,o=0,u=0, vocal=0, consonante=0;
	int nletras;
	cout<<"Digite una palabra: ";cin.getline(palabra,30,'\n');
	nletras=strlen(palabra);
	
	cout<<nletras<<endl;
		
	for(int r=0;r<nletras;r++){
		strlwr(palabra);
			switch(palabra[r]){
				case 'a': a++; vocal++; break;
				case 'e': e++; vocal++; break;
				case 'i': i++; vocal++; break;
				case 'o': o++; vocal++; break;
				case 'u': u++; vocal++; break;
				default: consonante++; break;
				}
		}
	
	cout<<"\nEl numero de consonantes son: "<<consonante<<endl;
	cout<<"\nEl numero de vocales son: "<<vocal<<endl;
	cout<<"\nLetra a: "<<a<<endl;
	cout<<"Letra e: "<<e<<endl;
	cout<<"Letra i: "<<i<<endl;
	cout<<"Letra o: "<<o<<endl;
	cout<<"Letra u: "<<u<<endl;	
	
	getch();
	return 0;
}
