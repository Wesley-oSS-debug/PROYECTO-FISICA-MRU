#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
	int op;
	do {
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1. Calcular Distancia."<<endl
			<<"2. Calcular Velocidad."<<endl
			<<"3. Calcular Tiempo."<<endl
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
		}
	} while (op!=0);
	return 0;
}