#include <iostream>
#include "funciones.h"
#include "estructuras.h"
using namespace std;
int main() {
	int op;
		cout<<"Ingrese la cantidad de datos a ingresar: "; cin>>cant; 
	do {
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1. Calcular Distancia."<<endl
			<<"2. Calcular Velocidad."<<endl
			<<"3. Calcular Tiempo."<<endl
			<<"4. Calcular la velocidad promedio"<<endl
			<<"5. Mostrar datos"<<endl
			<<"0. Salir del programa\n"<<endl;
		cout<<"Ingrese una opcion: "; cin>>op;
		switch (op) {
			case 1:
				Distancia();
				break;
			case 2:
				Velocidad();
				break;
			case 3:
				Tiempo();
				break;
			case 4:
				Velocidadprom();
				break;
			case 5:
				MostrarDatos();
				break;
		}
	} while (op!=0);
	return 0;
}