//matriz simetrica
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[3][3],contador=0;
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"matriz original: \n";
		for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<numeros[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if(numeros[j][i]==numeros[i][j]){
			contador++;
			}
		}
		cout<<endl;
	}
	if(contador==9){
		cout<<"\nSi es simetrica la matriz  ";
	}else{
		cout<<"\nNo es simetrica la matriz";
	}
	system("pause");
	return 0;
}

