#include <iostream>
#include <windows.h>
#include "funciones.h"
using namespace std;

void Velocidadprom() {
	system("cls");
	double x0, xf, t1, t2;
    cout<<"Ingrese la posicion inicial(m): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>x0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la posicion final(m): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo inicial (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>t1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo final (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>t2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<endl;
    cout<<"Velocidad promedio = (Xf-x0)/"<<"(tf-t0)"<<endl;
    double velocidadprom=(xf-x0)/(t2-t1);
    cout<<"\nLa velocidad instantanea es: "<<velocidadprom<<" m/s"<< endl;
    system("pause");
}