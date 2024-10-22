#include <iostream>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Velocidad() {
	system("cls");
	
	double distancia,tiempo;
	
	cout<<"Ingrese la distancia (m): "; cin>>Dato[n].distancia;
	cout<<"Ingrese el tiempo (s): "; cin>>Dato[n].tiempo;
    Dato[n].velocidad=Dato[n].distancia/Dato[n].tiempo;
    n++;
	cout<<endl;	
    system("pause");
}