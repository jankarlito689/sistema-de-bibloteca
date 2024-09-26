//imporaciones
#include "Academico.h"

//agrego props a usuario(constructor)
Academico::Academico(string nombre, string telefono, string email)
	 : Usuario(nombre, telefono, email){}
	

//metodos
void Academico::mostrarDatos() const{
	cout << "Nombre: " << nombre << "\nTelefono: " << telefono << "\nEmail: " << email << endl;
}




