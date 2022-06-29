//matriz transpuesta
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[3][3],numeros1[3][3],numeros2[3][3];
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros1[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			numeros2[i][j]=numeros[i][j]+numeros1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"matriz original 1: \n";
		for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<numeros[i][j];
		}
		cout<<endl;
	}
	cout<<"matriz original 2: \n";
		for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<numeros1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"matriz Resultante: \n";
		for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<numeros2[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
