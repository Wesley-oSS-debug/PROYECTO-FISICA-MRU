#include <iostream>
#include <windows.h>
#include "funciones.h"
#include "estructuras.h"
using namespace std;

void Velocidad() {
	system("cls");
	
	double distancia,tiempo;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo de la velocidad\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"Ingrese la distancia (m): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].distancia;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"Ingrese el tiempo (s): "; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>Dato[n].tiempo;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    Dato[n].velocidad=Dato[n].distancia/Dato[n].tiempo;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
    cout<<"\nLa velocidad es: "<<Dato[n].velocidad<<" m/s"<< endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    n++;
	cout<<endl;	
    system("pause");
}