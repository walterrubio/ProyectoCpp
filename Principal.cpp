#include "boleto.h"
#include "asignacion.h"
#include "pasajero.h"
#include "ruta.h"
#include "confort.h"
#include "plus.h"
#include "bus.h"
#include "ciudad.h"
#include "windows.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#define MAX 100

using namespace std;

class Principal {
	
	private:
		Asignacion **asig;
		Boleto **boletos;
		Pasajero **pasajeros;
		Ruta **rutas;
		Bus **buses;
		int w,x,y,z,n;
	
	public:
		Principal() {
			buses = new Bus * [MAX];
			rutas = new Ruta * [MAX];
			asig = new Asignacion * [MAX];
			boletos = new Boleto * [MAX];
			pasajeros = new Pasajero * [MAX];
			w = 0;
			x = 0;
			y = 0;
			z = 0;
			n = 0;
			
			this->menu();
		}
		
		~Principal(){ cout<<"Objeto destruido"<<endl; }
		
		int menu() {
			short resp = 0;
			system("cls");
			do{
		
				cout<<"\t\t    -- -- BERLINAS DEL FONCE -- --"<<endl;
				cout<<"\n    Bienvenido/a al servicio berlinas elija el numero de su opcion"<<endl;
				cout<<"\t1) Agregar bus"<<endl;
				cout<<"\t2) Agregar ruta"<<endl;
				cout<<"\t3) Asignar bus a ruta"<<endl;
				cout<<"\t4) Agregar pasajero"<<endl;
				cout<<"\t5) Mostrar rutas"<<endl;
				cout<<"\t6) Comprar boleto"<<endl;
				cout<<"\t7) Mostrar boletos vendidos"<<endl;
				cout<<"\t8) Salir"<<endl;
				cout<<"\tOpcion: ";
				cin>>resp;
				
				cin.sync();
				system("cls");
				
			}while(resp!=1&&resp!=2&&resp!=3&&resp!=4&&resp!=5&&resp!=6&&resp!=7&&resp!=8);
			
			switch(resp) {
				case 1:
					this->addBus();
					break;
				
				case 2:
					this->addRuta();
					break;
				
				case 3:
					this->asigRuta();
					break;
					
				case 4:
					this->addPasajero();
					break;
					
				case 5:
					this->mostrarRutas();
					break;
					
				case 6:
					this->comprarBoleto();
					break;
					
				case 7:
					//this->();
					break;
					
				case 8:
					cout<<"\nHasta luego..."<<endl<<endl;
					return 0;
					break;
					
				default:
					return 0;
					break;
			}
			this->menu();
		}
		
		void addBus() {
			short resp;
			short int control;
			char nombreConductor[64],sn;
			bool servicioBanho,servicioPantalla;
			
			do{
			
			cout<<"\n\tEscoja el bus deseado"<<endl;
			cout<<"\t1) Agregar bus [CONFORT]"<<endl;
			cout<<"\t2) Agregar bus [PLUS]"<<endl;
			cout<<"\tOpcion: ";
			cin>>resp;
			
			cin.sync();
			system("cls");
			
			}while(resp!=1&&resp!=2);
			
			switch (resp) {
				
				case 1:
					
					cout<<"Ingrese el control del bus: ";
					cin>>control;
					cin.sync();
					cout<<"Ingrese el nombre del conductor: ";
					cin.getline(nombreConductor,63);
					cout<<"Posee servicio de banho (S/N): ";
					cin>>sn;
					if(sn=='S' || sn=='s')
						servicioBanho=true;
					else if(sn=='n' || sn=='N')
						servicioBanho=false;
					else
						cout<<sn<<"Esa opcion es incorrecta"<<endl;
						
					buses[x] = new Confort(control,nombreConductor,servicioBanho);
					
					x++;
					break;
		
				case 2:
					
					cout<<"Ingrese el control del bus: ";
					cin>>control;
					cout<<"Ingrese el nombre del conductor: ";
					fflush(stdin);
					cin.getline(nombreConductor,63);
					cout<<"Posee servicio de pantalla (S/N): ";
					cin>>sn;
					if(sn=='S' || sn=='s')
						servicioPantalla=true;
					else if(sn=='n' || sn=='N')
						servicioPantalla=false;
					else
						cout<<sn<<" esa opcion es incorrecta"<<endl;
						
					buses[x] = new Plus(control,nombreConductor,servicioPantalla);
					
					x++;
					break;
			
				default:
					cout<<"¡ERROR!"<<endl;
					break;
				
			}
			
		}
		
		void addRuta() {
			
			Ciudad *ciudadSalida;
			Ciudad *ciudadLlegada;
			char horaSalida[6],nombre[20];
			char codigo[15],codigoC[6];
			
			cout<<"Ingrese el nombre de la ciudad de partida: ";
			cin.sync();
			cin.getline(nombre,20);
			cout<<"Ingrese el codigo de la ciudad de partida: ";
			cin.sync();
			cin.getline(codigoC,6);
			system("cls");
			ciudadSalida = new Ciudad(codigoC,nombre);
			
			cout<<"Ingrese el nombre de la ciudad destino: ";
			cin.sync();
			cin.getline(nombre,20);
			cout<<"Ingrese el codigo de la ciudad destino: ";
			cin.sync();
			cin.getline(codigoC,6);
			
			ciudadLlegada = new Ciudad(codigoC,nombre);
			
			cout<<"Hora de partida: ";
			cin.sync();
			cin.getline(horaSalida,6);
			cout<<"Ingrese el codigo de la ruta: ";
			cin.sync();
			cin.getline(codigo,15);
			
			rutas[y] = new Ruta(ciudadSalida,ciudadLlegada,horaSalida,codigo);
			
			y++;
			
		}
		
		void asigRuta() {
			
			int asigR, asigB;
			bool val=false;
			
			cout<<"\n---------------------- [RUTAS] ----------------------\n"<<endl;
			for(int i=0;i<y&&y<MAX;i++) {
				//imprimir
				cout<<i+1<<") ";
				rutas[i]->imprimir();
				cout<<"\n----------------------------------------------------\n"<<endl;
			}
			do {
				cout<<endl<<"Ingrese ruta a asignar:"<<endl;
				cout<<endl<<"Opcion: ";
				cin>>asigR;
				
				if(asigR <= y && asigR > 0)
					val = true;
				else
					val = false;
					
			} while(val==false);
			
			cin.sync();
			system("cls");
			
			cout<<"\n---------------------- [BUSES] ----------------------\n"<<endl;
			for(int i=0;i<x&&x<MAX;i++) {
				//imprimir
				cout<<i+1<<") ";
				buses[i]->imprimir();
				cout<<"\n----------------------------------------------------\n"<<endl;
			}
			do {
				cout<<endl<<"Ingrese bus a asignar a ruta"<<endl;
				cout<<endl<<"Opcion: ";
				cin>>asigB;
				
				if(asigB <= y && asigB > 0)
					val = true;
				else
					val = false;
					
			} while(val==false);
			
			asig[w] = new Asignacion(rutas[asigR],buses[asigB]);
					
			w++;
			
		}
		
		void addPasajero() {
			
			char cedula[12];
			char nombre[32];
			char apellido[32];
			
			cout<<"Ingrese su nombre: ";
			cin.sync();
			cin.getline(nombre,32);
			cout<<"Ingrese su apellido: ";
			cin.sync();
			cin.getline(apellido,32);
			cout<<"Ingrese su cedula: ";
			cin.sync();
			cin.getline(cedula,12);
			
			pasajeros[z] = new Pasajero(cedula,nombre,apellido);
					
			z++;
			
		}
		
		void mostrarRutas() {
			
			cout<<"\n---------------------- [RUTAS] ----------------------\n"<<endl;
			for(int i=0;i<y&&y<MAX;i++) {
				//imprimir
				cout<<i+1<<") ";
				rutas[i]->imprimir();
				cout<<"\n----------------------------------------------------\n"<<endl;
			}
			cout<<"\n\nPrecione una tecla para continuar...";
			cin.get();
		}
		
		void comprarBoleto() {
			
			
			
			
			
			
		}
		
};

int main(int argc, char** argv) {
	
	Principal p;
	
	return 0;
}

