/*si es vocal minuscula o mayuscula o no lo es
*/
#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"digite un caracter: ";
	cin>>letra;
	
	switch (letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal minuscula";
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"Es una vocal mayuscula";
			break;
		default :cout<<"no es ninguna vocal minuscula o mayuscula.";
			break;
	}
	
	
	return 0;
}
