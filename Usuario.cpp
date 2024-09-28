//importamos librerias
#include "Usuario.h"
//agrego props a usuario
Usuario::Usuario(string nombre, string telefono, string email, string carrera, string codigoEstudiante)
	:nombre(nombre), telefono(telefono), email(email), carrera(carrera), codigoEstudiante(codigoEstudiante){}

//mosramos los datos de usuario
void Usuario::mostrarDatos() const{
	cout << "Datos del alumno" << endl;
	cout << "Nombre: " << nombre 
	     << "\nTelefono: " << telefono
	     << "\nEmail: " << email 
	     << "\ncarrera:"  << carrera 
	     << "\ncodigoEstudiante:" << codigoEstudiante << endl;
}
