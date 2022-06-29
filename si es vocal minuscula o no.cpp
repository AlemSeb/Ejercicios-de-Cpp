/*si es vocal minuscula o no
*/
#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"digite un caracter: ";
	cin>>letra;
	
	switch (letra){
		case 'a':cout<<"Es la vocal a";
			break;
		case 'e':cout<<"Es la vocal e";
			break;
		case 'i':cout<<"Es la vocal i";
			break;
		case 'o':cout<<"Es la vocal o";
			break;
		case 'u':cout<<"Es la vocal u";
			break;
		default :cout<<"no es ninguna vocal minuscula.";
			break;
	}
	
	
	return 0;
}
