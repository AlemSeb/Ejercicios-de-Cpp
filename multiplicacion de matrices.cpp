//Multiplicacion de matrices
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros1[3][3]={1,2,3, 4,5,6, 7,8,9},numeros2[3][3]={9,8,7 ,6,5,4 ,3,2,1};
	int numeros3[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			numeros3[i][j]=0;
			for(int k=0;k<3;k++){
				numeros3[i][j]+=numeros1[i][k]*numeros2[k][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	getch();
	return 0;
}
