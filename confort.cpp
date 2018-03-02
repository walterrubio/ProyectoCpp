#include "confort.h"
#include "bus.h"
#include <iostream>

using namespace std;

//Constructor por defecto
Confort::Confort() {
	this->servicioBanho = false;
}

//Constructor parametrico
Confort::Confort(bool servicioBanho) {
	this->servicioBanho = servicioBanho;
}

//Constructor parametrico (Con lo del padre)
Confort::Confort(short int control, char *nombreConductor, bool servicioBanho) : Bus(control, nombreConductor) {
	this->servicioBanho = servicioBanho;
}

//Destructor
Confort::~Confort() { cout<<"Objeto destruido"<<endl; }

//Metodo Getter
bool Confort::getServicioBanho() { return this->servicioBanho; }

//Metodo Setter
void Confort::setServicioBanho() { this->servicioBanho = servicioBanho; }

//Metodo virtual
void Confort::imprimir() {
	Bus::imprimir();
	if(this->servicioBanho==true)
		cout<<"Cuenta con servicio de banho"<<endl;
	else
		cout<<"No cuenta con servicio de banho"<<endl;
}

