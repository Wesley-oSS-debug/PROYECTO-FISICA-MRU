#include <iostream>
#include <windows.h>
#include "estructuras.h"
#include "funciones.h"

using namespace std;

void MostrarDatos() {
	if (n<1) {
		cout<<"No hay datos que mostrar\n"<<endl;
	} else {
		for (int i=0;i<n;i++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
			cout<<"DATO "<<i+1<<" Distancia: "<<Dato[i].distancia
		    	<<"m Tiempo: "<<Dato[i].tiempo
				<<"s Velocidad: "<<Dato[i].velocidad<<" m/s"<< endl;	
		    cout<<endl;
		    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		}
	}
	system("pause");
}