#ifndef CONFORT_H
#define CONFORT_H

#include "bus.h"

class Confort : public Bus
{
	public:
		//Atributo
		bool servicioBanho;
	
	public:
		//Constructores
		Confort();
		Confort(bool servicioBanho);
		Confort(short int control, char *nombreConductor, bool servicioBanho);
		//Destructor
		~Confort();
		//Getter
		bool getServicioBanho();
		//Setter
		void setServicioBanho();
		//Metodo
		virtual void imprimir();
		
};

#endif
