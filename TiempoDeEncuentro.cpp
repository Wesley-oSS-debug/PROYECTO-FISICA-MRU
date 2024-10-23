#include <iostream>
#include "funciones.h"
using namespace std;

void tiempoDeEncuentro() {
	system("cls");
	double distancia, velocidad1, velocidad2, tiempoDeEncuentro;
    cout<<"Ingrese la distancia (m): "; 
	cin>>distancia;
    cout<<"Ingrese la velocidad del primer objeto (m/s): "; 
	cin>>velocidad1;
    cout<<"Ingrese la velocidad del segundo objeto (m/s): "; 
	cin>>velocidad2;
	tiempoDeEncuentro=distancia/(velocidad1+velocidad2);
    cout<<"\nEl tiempo de encuentro de los dos objetos es: "<<tiempoDeEncuentro<<" s"<< endl;
    system("pause");
}
