#include <iostream>
#include "funciones.h"
#include <windows.h>
#include "estructuras.h"
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	int op;
	int aux;
	
	cout<<"Ingrese la cantidad de datos a ingresar: "; cin>>cant; 
	do {
		if (n<=cant) {
			system("cls");
			cout<<"MENU PRINCIPAL"<<endl;
			cout<<"1. Calcular Distancia."<<endl
				<<"2. Calcular Velocidad."<<endl
				<<"3. Calcular Tiempo."<<endl
				<<"4. Calcular la velocidad promedio"<<endl
				<<"5. Calcular la repidez promedio "<<endl
				<<"6. Mostrar datos"<<endl
				<<"0. Salir del programa\n"<<endl;
			cout<<"Ingrese una opcion: "; cin>>op;
			cout<<endl;
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
					Rapidezprom();
					break;
	      		case 6:
	       			MostrarDatos();
					break;	
			}
		} else {
			cout<<"Cantidad excedida"<<endl;
			return 0;
		}
	} while (op!=0);	
	return 0;
}