#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    char cadi[20];
    char cadf[20];
    int numero;
    float numerof;
    cout<<"digite un numero\n";
    cin.getline(cadi,20,'\n');
    cout<<"digite otro numero\n";
    cin.getline(cadf,20,'\n');
    
    numero=atoi(cadi);
    numerof=atof(cadf);
    
    numerof+=numero;
    cout<<numerof<<endl;
    
    getch();
    return 0;
}
