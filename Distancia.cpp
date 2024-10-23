#include <iostream>
#include <windows.h>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Distancia() {
	system("cls");
    cout<<"Ingrese la velocidad (m/s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].velocidad;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].tiempo;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    Dato[n].distancia=Dato[n].velocidad*Dato[n].tiempo;
    cout<<"\nLa distancia recorrida es: "<<Dato[n].distancia<<" m"<< endl;
    n++;
    system("pause");
}