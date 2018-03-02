#include "ruta.h"
#include "ciudad.h"
#include <string.h>
#include <iostream>

using namespace std;

//Constructor por defecto
Ruta::Ruta() {
	this->ciudadSalida = new Ciudad();
	this->ciudadLlegada = new Ciudad();
	strcpy(this->horaSalida," ");
	strcpy(this->codigo," ");
}

//Constructor parametrico
Ruta::Ruta(Ciudad *ciudadSalida, Ciudad *ciudadLlegada, char *horaSalida, char *codigo) {
	this->ciudadSalida = ciudadSalida;
	this->ciudadLlegada = ciudadLlegada;
	strcpy(this->horaSalida,horaSalida);
	strcpy(this->codigo,codigo);
}

//Destructor
Ruta::~Ruta() { cout<<"Objeto destruido"<<endl; }

//Metodos Getter
char * Ruta::getHoraSalida() { return this->horaSalida; }

char * Ruta::getCodigo() { return this->codigo; }

//Metodos Setter
void Ruta::setHoraSalida() { strcpy(this->horaSalida,horaSalida); }

void Ruta::setCodigo() { strcpy(this->codigo,codigo); }

//Metodo
void Ruta::imprimir() {
	cout<<"Salida:\tLlegada:\tHORA:    CODIGO:"<<endl<<endl;
	cout<<ciudadSalida->getNombre()<<"\t\t"<<ciudadLlegada->getNombre()<<"\t\t"<<this->horaSalida<<"        "<<this->codigo<<endl;
}

