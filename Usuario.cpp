//importamos librerias
#include "Usuario.h"
//agrego props a usuario
Usuario::Usuario(string nombre, string telefono, string email)
	:nombre(nombre), telefono(telefono), email(email){}

//mosramos los datos de usuario
void Usuario::mostrarDatos() const{
	cout << "Nombre: " << nombre << "\nTelefono: " << telefono << "\nEmail: " << email << endl;
}
