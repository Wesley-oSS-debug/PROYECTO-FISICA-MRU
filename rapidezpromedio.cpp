#include <iostream>
#include <windows.h>
#include "funciones.h"

using namespace std;

void Rapidezprom() {
	system("cls");
	double d, t1, t2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo de la rapidez promedio\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"\n\nRapidez promedio =\t\033[4m d \033[0m\n";
	cout << "         \t\tΔt        \n\n";
    cout<<"Ingrese la distacia recorrida (m) : "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>d;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo inicial (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>t1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo final (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>t2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Rapidez promedio = ("<<d<<") / "<<"("<<t2<<"-"<<t1<<")\n";
    double rap=(d)/(t2-t1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
    cout<<"La rapidez promedio es : "<<rap<<" m/s\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    system("pause");
}