#include "pasajero.h"
#include <string.h>
#include <iostream>

using namespace std;

//Constructor por defecto
Pasajero::Pasajero() {
	strcpy(this->cedula," ");
	strcpy(this->nombre," ");
	strcpy(this->apellido," ");
}

//Constructor parametrico
Pasajero::Pasajero(char *cedula, char *nombre, char *apellido) {
	strcpy(this->cedula,cedula);
	strcpy(this->nombre,nombre);
	strcpy(this->apellido,apellido);
}

//Destructor
Pasajero::~Pasajero() { cout<<"Objeto destruido"<<endl; }

//Metodos Getter
char * Pasajero::getCedula() { return this->cedula; }

char * Pasajero::getNombre() { return this->nombre; }

char * Pasajero::getApellido() { return this->apellido; }

//Metodos Setter
void Pasajero::setCedula() { strcpy(this->cedula,cedula); }

void Pasajero::setNombre() { strcpy(this->nombre,nombre); }

void Pasajero::setApellido() { strcpy(this->apellido,apellido); }

