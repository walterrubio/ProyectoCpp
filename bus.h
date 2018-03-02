#ifndef BUS_H
#define BUS_H

class Bus
{
	public:
		//Atributos
		short int control;
		char nombreConductor[64];
	
	public:
		//Constructores
		Bus();
		Bus(short int control, char *nombreConductor);
		//Destructor
		~Bus();
		//Getters
		short int getControl();
		char * getNombreConductor();
		//Setters
		void setControl();
		void setNombreConductor();
		//Metodo
		virtual void imprimir();
		
};

#endif
