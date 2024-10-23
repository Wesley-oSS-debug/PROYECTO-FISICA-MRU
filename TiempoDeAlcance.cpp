#include <iostream>
#include "funciones.h"
using namespace std;

void tiempoDeAlcance() {
	system("cls");
	double distancia, velocidad1, velocidad2, tiempoDeEncuentro;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo del tiempo de alcance\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la distancia (m): "; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>distancia;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la velocidad del primer objeto (m/s): "; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>velocidad1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"Ingrese la velocidad del segundo objeto (m/s): "; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cin>>velocidad2;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	tiempoDeEncuentro=distancia/(velocidad1-velocidad2);
    cout<<"\nEl tiempo de encuentro de los dos objetos es: "<<tiempoDeEncuentro<<" s"<< endl;
    system("pause");
}
