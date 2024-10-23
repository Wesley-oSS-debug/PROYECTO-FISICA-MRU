#include <iostream>
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
    cout << "Ingrese el numero de terminos del polinomio: ";
    cin >> n;
    double coeficiente, tiempo;
    int exponente;
    double velocidadInstantanea = 0;
    cout << "Ingrese los coeficientes y exponentes:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Coeficiente del termino " << i + 1 << ": ";
        cin >> coeficiente;
        cout << "Exponente del termino " << i + 1 << ": ";
        cin >> exponente;

        cout << "Ingrese el tiempo en que desea evaluar la velocidad: ";
        cin >> tiempo;
        velocidadInstantanea += derivarTerm(coeficiente, exponente, tiempo);
    }
    cout << "\nLa velocidad instantanea en el tiempo dado es: "
         << velocidadInstantanea << " m/s" << endl;
    system("pause");
}