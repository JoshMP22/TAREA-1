#include <iostream>
using namespace std;

class Persona{
	// atributos
	protected : string nombres, apellidos, direccion;
				int telefono;
	//Constructor
	protected :
				Persona	(){
				}		
				Persona	(string nom,string ap,string dir, int tel){
					nombres=nom;
					apellidos=ap;
					direccion=dir;
					telefono=tel;
				}		
				
	// metodo
	void mostrar();
};
