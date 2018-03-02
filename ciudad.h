#ifndef CIUDAD_H
#define CIUDAD_H

class Ciudad
{
	private:
		//Atributos
		char codigo[6];
		char nombre[20];
	
	public:
		//Constructores
		Ciudad();
		Ciudad(char *codigo, char *nombre);
		//Destructor
		~Ciudad();
		//Getters
		char * getCodigo();
		char * getNombre();
		//Setters
		void setCodigo();
		void setNombre();
		
};

#endif
