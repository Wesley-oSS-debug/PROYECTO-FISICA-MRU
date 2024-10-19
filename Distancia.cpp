#include <iostream>
#include "funciones.h"
using namespace std;

void Distancia() {
	system("cls");
	double velocidad,tiempo;
    cout<<"Ingrese la velocidad (km/h): "; cin>>velocidad;
    cout<<"Ingrese el tiempo (h): "; cin>>tiempo;
    double distancia=velocidad*tiempo;
    cout<<"\nLa distancia recorrida es: "<<distancia<<" km\n"<< endl;
    system("pause");
}