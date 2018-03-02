#ifndef BOLETO_H
#define BOLETO_H

#include "asignacion.h"
#include "pasajero.h"

class Boleto
{
	private:
		//Atributos
		int numero;
		Asignacion *asignacion;
		Pasajero *pasajero;
	
	public:
		//Atributo
		int codigoVerificacion;
	
	public:
		//Constructores
		Boleto();
		Boleto(int numero, Asignacion *asignacion, Pasajero *pasajero, int codigoVerificacion);
		//Destructor
		~Boleto();
		//Getters
		int getNumero();
		int getCodigoVerificacion();
		//Setters
		void setNumero();
		void setCodigoVerificacion();
		
};

#endif
