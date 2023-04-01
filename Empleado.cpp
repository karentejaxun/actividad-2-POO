#include "Persona2.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona2 {
	//atributos 
	private : string puesto;
	           int cod_empleado;
	        
    //constructor 
    public :
    	Empleado (){
		}
		
		Empleado (string nom, string ape, string dir, int tel,int fn, string puesto, int ce) : Persona2(nom,ape,dir,tel,fn){
			puesto = puesto;
			cod_empleado = ce;		
		}
		
		//metodos
	//set (modificar)
	void setPuesto(string puesto ){puesto = puesto;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFecha_nacimiento(int fn){fecha_nacimiento = fn;}
	void setCodigo_empleado(int ce){cod_empleado = ce;}	
	
	//get (mostrar)	
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
    string getDireccion(){return direccion;}	
	int getTelefono(){return telefono;}
	int getfecha_nacimiento(){return fecha_nacimiento;}	
	int getCodigo_empleado(){return cod_empleado;}
	
	//metodo
	void mostrar (){
	cout<<"------------"<<endl;
	cout<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<","<<cod_empleado<<endl;
	}
    	
};
