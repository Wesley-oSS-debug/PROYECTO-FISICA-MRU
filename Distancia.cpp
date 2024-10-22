#include <iostream>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Distancia() {
	system("cls");
    cout<<"Ingrese la velocidad (m/s): "; cin>>Dato[n].velocidad;
    cout<<"Ingrese el tiempo (s): "; cin>>Dato[n].tiempo;
    Dato[n].distancia=Dato[n].velocidad*Dato[n].tiempo;
    cout<<"\nLa distancia recorrida es: "<<Dato[n].distancia<<" m"<< endl;
    n++;
    system("pause");
}