#ifndef RUTA_H
#define RUTA_H

#include "ciudad.h"

class Ruta
{
	private:
		//Atributos
		Ciudad *ciudadSalida;
		Ciudad *ciudadLlegada;
		char horaSalida[6];
		char codigo[15];
	
	public:
		//Constructores
		Ruta();
		Ruta(Ciudad *ciudadSalida, Ciudad *ciudadLlegada, char *horaSalida, char *codigo);
		//Destructor
		~Ruta();
		//Getters
		char * getHoraSalida();
		char * getCodigo();
		//Setters
		void setHoraSalida();
		void setCodigo();
		//Metodo
		void imprimir();
		
};

#endif
