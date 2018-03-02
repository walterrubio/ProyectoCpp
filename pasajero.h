#ifndef PASAJERO_H
#define PASAJERO_H

class Pasajero
{
	private:
		//Atributos
		char cedula[12];
		char nombre[32];
		char apellido[32];
	
	public:
		//Constructores
		Pasajero();
		Pasajero(char *cedula, char *nombre, char *apellido);
		//Destructor
		~Pasajero();
		//Getters
		char * getCedula();
		char * getNombre();
		char * getApellido();
		//Setters
		void setCedula();
		void setNombre();
		void setApellido();
		
};

#endif
