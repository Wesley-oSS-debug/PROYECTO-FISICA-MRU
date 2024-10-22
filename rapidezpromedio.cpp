#include <iostream>
#include "funciones.h"

using namespace std;

void Rapidezprom() {
	system("cls");
	double d, t1, t2;
	cout<<"\n\nRapidez promedio=\t\033[4m d \033[0m\n";
	cout << "         \t\tΔt        \n\n";
    cout<<"Ingrese la distacia recorrida (m) : "; cin>>d;
    cout<<"Ingrese el tiempo inicial (s): "; cin>>t1;
    cout<<"Ingrese el tiempo final (s): "; cin>>t2;
    cout<<"Rapidez promedio = ("<<d<<") / "<<"("<<t2<<"-"<<t1<<")\n";
    double rap=(d)/(t2-t1);
    cout<<"La rapidez promedio es : "<<rap<<" m/s\n";
    system("pause");
}