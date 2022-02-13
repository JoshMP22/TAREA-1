#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{
	
	//atributos
	private : string nit;
	
	//constructor
	public: 
	Cliente (){
	}
	Cliente (string nom, string ap, string dir, int tel, string n) : Persona ( nom, ap, dir, tel){
		nit=n;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit =n;	}
	void setNombres(string nom){nombres =nom;	}
	void setApellidos(string ap){nombres =ap;	}
	void setDireccion(string dir){direccion =dir;	}
	void setTelefono(int tel){telefono =tel;	}
	
	//get (mostrar)
	string getNit(){return nit;	}
	string getNombres(){return nombres;	}
	string getApellidos(){return apellidos;	}
	string getDireccion(){return direccion;	}
	int getTelefono(){return telefono;	}
	
	//metodo mos
	void mostrar(){
		cout<<"_______________________"<< endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<< direccion<<","<< telefono<<endl;
	}
};

