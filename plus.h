#ifndef PLUS_H
#define PLUS_H

#include "bus.h"

class Plus : public Bus
{
	public:
		//Atributo
		bool servicioPantalla;
	
	public:
		//Constructores
		Plus();
		Plus(bool servicioPantalla);
		Plus(short int control, char *nombreConductor, bool servicioPantalla);
		//Destructor
		~Plus();
		//Getter
		bool getServicioPantalla();
		//Setter
		void setServicioPantalla();
		//Metodo
		virtual void imprimir();
		
};

#endif
