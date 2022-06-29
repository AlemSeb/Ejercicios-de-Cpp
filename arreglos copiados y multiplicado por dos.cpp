#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int letras1[]={2,3,5,7,11};
	int letras3[4];
	
	for(int i=0;i<5;i++){
		letras3[i]=2*letras1[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<letras3[i]<<endl;
	}
	getch();
	return 0;
	}
