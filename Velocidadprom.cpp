#include <iostream>
#include "funciones.h"
using namespace std;

void Velocidadprom() {
	system("cls");
	double x0, xf, t1, t2;
    cout<<"Ingrese la posicion inicial(m): "; cin>>x0;
    cout<<"Ingrese la posicion final(m): "; cin>>xf;
    cout<<"Ingrese el tiempo inicial (s): "; cin>>t1;
    cout<<"Ingrese el tiempo final (s): "; cin>>t2;
    cout<<"Velocidad promedio = ("<<xf<<"-"<<x0<<")/"<<"("<<t2<<"-"<<t1<<")";
    double velocidadprom=(xf-x0)/(t2-t1);
    cout<<"\nLa velocidad instantanea es: "<<velocidadprom<<" m/s"<< endl;
    system("pause");
}