#include "boleto.h"
#include "asignacion.h"
#include "pasajero.h"
#include <iostream>

using namespace std;

//Constructor por defecto
Boleto::Boleto() {
	this->numero = 0;
	this->asignacion = new Asignacion();
	this->pasajero = new Pasajero();
	this->codigoVerificacion = 0;
}

//Constructor parametrico
Boleto::Boleto(int numero, Asignacion *asignacion, Pasajero *pasajero, int codigoVerificacion) {
	this->numero = numero;
	this->asignacion = asignacion;
	this->pasajero = pasajero;
	this->codigoVerificacion = codigoVerificacion;
}

//Destructor
Boleto::~Boleto() { cout<<"Objeto destruido"<<endl; }

//Metodos Getter
int Boleto::getNumero() { return this->numero; }

int Boleto::getCodigoVerificacion() { return this->codigoVerificacion; }

//Metodos Setter
void Boleto::setNumero() { this->numero = numero; }

void Boleto::setCodigoVerificacion() { this->codigoVerificacion = codigoVerificacion; }
		
