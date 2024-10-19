#include <iostream>
#include "funciones.h"
using namespace std;

void Velocidad() {
	system("cls");
	double distancia,tiempo;
    cout<<"Ingrese la distancia (m): "; cin>>distancia;
    cout<<"Ingrese el tiempo (s): "; cin>>tiempo;
    double velocidad=distancia/tiempo;
    cout<<"\nLa velocidad es: "<<velocidad<<" m/s"<< endl;
    system("pause");
}