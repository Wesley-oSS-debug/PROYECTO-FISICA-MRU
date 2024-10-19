#include <iostream>
#include "funciones.h"
using namespace std;

void Distancia() {
	system("cls");
	double velocidad,tiempo;
    cout<<"Ingrese la velocidad (m/s): "; cin>>velocidad;
    cout<<"Ingrese el tiempo (s): "; cin>>tiempo;
    double distancia=velocidad*tiempo;
    cout<<"\nLa distancia recorrida es: "<<distancia<<" m/s"<< endl;
    system("pause");
}