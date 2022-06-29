//Estadisticas de notas de alumnos.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float N1,N2,N3,todas=0,una=0,ultima=0;
	
	
	for(int i=1;i<=5;i++){
	
	cout<<"ingrese la primera nota del alumno "<<i<<": ";
	cin>>N1;
	cout<<"ingrese la Segunda nota del alumno "<<i<<": ";
	cin>>N2;
	cout<<"ingrese la Ultima nota del alumno "<<i<<": ";
	cin>>N3;
	if((N1>10&&N2>10)&&(N3>10)){//todos
		todas++;
		una++;
	}
	if((N1>10&&N2<10)&&(N3<10)){//aprobo N1
		una++;
	}
	if((N1<10&&N2>10)&&(N3<10)){//aprobo N2
		una++;
	}
	if((N1<10&&N2<10)&&(N3>10)){//aprobo n3
		una++;
		ultima++;
	}
	if((N1>10&&N2>10)&&(N3<10)){//aprobo n1 y n2
		una++;
	}
	if((N1>10&&N2<10)&&(N3>10)){//aprobo n1 y n3
		una++;
	}
	if((N1<10&&N2>10)&&(N3>10)){//aprobo n2 y n3
		una++;
	}
	}
	
	cout<<"Alumnos que aprobaron todos los examenes: "<<todas <<endl;
	cout<<"Alumnos que aprobaron al menos un examen: "<<una <<endl;
	cout<<"Alumnos que aprobaron solo el ultimo examen: "<<ultima <<endl;
	getch();
	return 0;
}
