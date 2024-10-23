#include <iostream>
#include <windows.h>
#include <cmath>
#include "funciones.h"
using namespace std;

double derivarTerm(double coeficiente, int exponente, double tiempo) {
    if (exponente == 0){
    	return 0;	
	}else{
        double nuevoCoef = coeficiente * exponente;
        int nuevoExp = exponente - 1;
        return nuevoCoef * pow(tiempo, nuevoExp);
	}
}

void Velocidadinst() {
	system("cls");
    int n; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "Calculo de la velocidad instantanea\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "Ingrese el numero de terminos del x(t): ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cin >> n;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    double coeficiente, tiempo;
    int exponente;
    double velocidadInstantanea = 0;
    cout << "Ingrese los coeficientes y exponentes:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Coeficiente del termino " << i + 1 << ": ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> coeficiente;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "Exponente del termino " << i + 1 << ": ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> exponente;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "Ingrese el tiempo en que desea evaluar la velocidad: ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cin >> tiempo;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        velocidadInstantanea += derivarTerm(coeficiente, exponente, tiempo);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
    cout << "\nLa velocidad instantanea en el tiempo dado es: "
         << velocidadInstantanea << " m/s" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    system("pause");
}
