#include <iostream>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Tiempo() {
	system("cls");
    cout<<"Ingrese el distancia (m): "; cin>>Dato[n].distancia;
    cout<<"Ingrese la velocidad (m/s): "; cin>>Dato[n].velocidad;
    Dato[n].tiempo=Dato[n].distancia/Dato[n].velocidad;
    cout<<"\nLa tiempo que se requiere es: "<<Dato[n].tiempo<<"s"<< endl;
    n++;
    system("pause");
}