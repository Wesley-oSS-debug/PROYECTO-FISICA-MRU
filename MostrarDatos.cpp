#include <iostream>
#include "estructuras.h"
#include "funciones.h"

using namespace std;

void MostrarDatos() {
	for (int i=0;i<n;i++) {
		cout<<"DATO "<<i+1<<" Distancia: "<<Dato[i].distancia
	    	<<"m Tiempo: "<<Dato[i].tiempo
			<<"s La velocidad es: "<<Dato[i].velocidad<<" m/s"<< endl;	
	    cout<<endl;
	}
	system("pause");
}