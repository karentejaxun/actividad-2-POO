#include "Empleado.cpp"
#include <iostream>
using namespace std;
main (){
	string puesto,nombres,apellidos,direccion;
	int telefono;
	int fecha_nacimiento;
	int cod_empleado;
	
	cout<<"Ingrese el puesto del Empleado: ";
	cin>>puesto;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
    cout<<"Ingresar la fecha de nacimiento del empleado: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese el codigo del empleado: ";
	cin>>cod_empleado;
	
	Empleado obj = Empleado(puesto,nombres,apellidos,direccion,telefono,fecha_nacimiento,cod_empledo);
	obj.mostrar();
	
	//no me compilo inge :(
	
	//cout<<"Datos del Empleado:" <<obj.getPuesto()<<obj.getCodigo_empleado()<<obj.getNombres()<<obj.getApellidos()<<obj.getDireccion()<<obj.getTelefono()<<obj.getfecha_nacimiento()<<endl;
		
	/*Empleado obj = Empleado();
	obj.setpuesto(puesto);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setfecha_nacimiento(fecha_nacimiento);
	obj.setTelefono(telefono);
	obj.setCodigo_empleado(cod_empleado);
	obj.mostrar();
	*/
	
	
};
