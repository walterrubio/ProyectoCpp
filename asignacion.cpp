#include "asignacion.h"
#include "ruta.h"
#include "bus.h"
#include <iostream>

using namespace std;

//Constructor por defecto
Asignacion::Asignacion() {
	this->ruta = new Ruta();
	this->bus = new Bus();
}

//Constructor parametrico
Asignacion::Asignacion(Ruta *ruta, Bus *bus) {
	this->ruta = ruta;
	this->bus = bus;
}

//Destructor
Asignacion::~Asignacion() { cout<<"Objeto destruido"<<endl; }

