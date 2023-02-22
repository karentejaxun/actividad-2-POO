#include "Persona2.cpp"
#include <iostream>
using namespace std;

class Cliente2 : Persona2 {
	//atributos 
	private : string nit;
	
	//constructor
	public : 
	Cliente2 (){
	}
	
    Cliente2 (string nom,string ape,string dir,int tel,int fn,string n) : Persona2(nom,ape,dir,tel,fn){
		nit = n; 
	
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFecha_Nacimiento(int fn){fecha_nacimiento = fn;}
	
	//get (mostrar)	
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidost(){return apellidos;}
    string getDireccion(){return direccion;}	
	int getTelefono(){return telefono;}
	int getfecha_nacimiento(){return fecha_nacimiento;}	
	
	void mostrar (){
		cout<<"------------"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
	}

	
};
