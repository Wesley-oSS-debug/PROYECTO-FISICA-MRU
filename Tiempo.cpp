#include <iostream>
#include <windows.h>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Tiempo() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo del tiempo\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese el distancia (m): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].distancia;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la velocidad (m/s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].velocidad;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    Dato[n].tiempo=Dato[n].distancia/Dato[n].velocidad;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
    cout<<"\nLa tiempo que se requiere es: "<<Dato[n].tiempo<<"s"<< endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    n++;
    system("pause");
}