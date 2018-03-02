#include "bus.h"
#include <iostream>
#include <string.h>

using namespace std;

//Constructor por defecto
Bus::Bus() {
	this->control = 0;
	strcpy(this->nombreConductor," ");
}

//Constructor parametrico
Bus::Bus(short int control, char *nombreConductor) {
	this->control = control;
	strcpy(this->nombreConductor,nombreConductor);
}

//Destructor
Bus::~Bus() { cout<<"Objeto destruido"<<endl; }

//Metodos Getter
short int Bus::getControl() { return this->control; }

char * Bus::getNombreConductor() { return this->nombreConductor; }

//Metodos Setter
void Bus::setControl() { this->control = control; }

void Bus::setNombreConductor() { strcpy(this->nombreConductor,nombreConductor); }

//Metodo virtual
void Bus::imprimir() {
	cout<<"Control del bus: ["<<this->control<<"]"<<endl;
	cout<<"Nombre del conductor: ["<<this->nombreConductor<<"]"<<endl;
}

