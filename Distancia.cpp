#include <iostream>
#include <windows.h>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Distancia() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo de la distancia\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la velocidad (m/s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].velocidad;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el tiempo (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].tiempo;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    Dato[n].distancia=Dato[n].velocidad*Dato[n].tiempo;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
    cout<<"\033[33m"<<"\nLa distancia recorrida es: "<<Dato[n].distancia<<" m"<<"\033[0m"<< endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    n++;
    system("pause");
}