#include "ciudad.h"
#include <string.h>
#include <iostream>

using namespace std;

//Constructor por defecto
Ciudad::Ciudad() {
	strcpy(this->codigo," ");
	strcpy(this->nombre," ");
}

//Constructor parametrico
Ciudad::Ciudad(char *codigo, char *nombre) {
	strcpy(this->codigo,codigo);
	strcpy(this->nombre,nombre);
}

//Destructor
Ciudad::~Ciudad() { cout<<"Objeto destruido"<<endl; }

//Metodos Getter
char * Ciudad::getCodigo() { return this->codigo; }

char * Ciudad::getNombre() { return this->nombre; }

//Metodos Setter
void Ciudad::setCodigo() { strcpy(this->codigo,codigo); }

void Ciudad::setNombre() { strcpy(this->nombre,nombre); }

