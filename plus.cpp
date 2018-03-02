#include "plus.h"
#include "bus.h"
#include <iostream>

using namespace std;

//Constructor por defecto
Plus::Plus() {
	this->servicioPantalla = false;
}

//Constructor parametrico
Plus::Plus(bool servicioPantalla) {
	this->servicioPantalla = servicioPantalla;
}

//Constructor parametrico (Con lo del padre)
Plus::Plus(short int control, char *nombreConductor, bool servicioPantalla) : Bus(control, nombreConductor) {
	this->servicioPantalla = servicioPantalla;
}

//Destructor
Plus::~Plus() { cout<<"Objeto destruido"<<endl; }

//Metodo Getter
bool Plus::getServicioPantalla() { return this->servicioPantalla; }

//Metodo Setter
void Plus::setServicioPantalla() { this->servicioPantalla = servicioPantalla; }

//Metodo virtual
void Plus::imprimir() {
	Bus::imprimir();
	if(this->servicioPantalla==true)
		cout<<"Cuenta con servicio de pantalla"<<endl;
	else
		cout<<"No cuenta con servicio de pantalla"<<endl;
}

