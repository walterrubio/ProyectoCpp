#ifndef ASIGNACION_H
#define ASIGNACION_H

#include "ruta.h"
#include "bus.h"

class Asignacion
{
	private:
		//Atributos
		Ruta *ruta;
		Bus *bus;
	
	public:
		//Constructores
		Asignacion();
		Asignacion(Ruta *ruta, Bus *bus);
		//Destructor
		~Asignacion();
		
};

#endif
