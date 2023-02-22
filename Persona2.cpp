/*Universidad Mariano Galvez de Guatemala
  Ingenieria en sistemas de informacion y ciencias de la computacion
  Programación I
  Karen Marleny Tejaxún Puc 1290-22-13292
  Actividad 2: POO
*/
#include <iostream>
using namespace std;
class Persona2{
	//atributos 
	protected : string nombres,apellidos,direccion;
            	int telefono;
            	int fecha_nacimiento;
  
    //constructor 
    
    protected : 
               Persona2 (){
			   }
			   Persona2 (string nom, string ape, string dir, int tel, int fn){
			   	nombres = nom;
			   	apellidos = ape;
			   	direccion = dir;
			   	telefono = tel;
			   	fecha_nacimiento = fn;		
			   }
			   
    //metodo
    void mostrar(); 

	
};
