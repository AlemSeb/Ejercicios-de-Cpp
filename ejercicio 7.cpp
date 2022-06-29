#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char palabra[20];
    cout<<"digite su nombre\n";
    cin.getline(palabra,20,'\n');
    
    if(palabra[0]=='A'){
	strlwr(palabra);
	}
    
    cout<<palabra<<endl;
    getch();
    return 0;
}
