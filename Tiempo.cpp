#include <iostream>
#include "funciones.h"
using namespace std;

void Tiempo() {
	system("cls");
	double velocidad,distancia;
    cout<<"Ingrese el distancia (m): "; cin>>distancia;
    cout<<"Ingrese la velocidad (m/s): "; cin>>velocidad;
    double tiempo=distancia/velocidad;
    cout<<"\nLa tiempo que se requiere es: "<<tiempo<<"s"<< endl;
    system("pause");
}