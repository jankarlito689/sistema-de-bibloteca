#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

using namespace std;
//Super clase de usuario
//heredan de ella academicos y administrador
class Usuario{
	//atributos
	protected:
		string nombre;
		string telefono;
		string email;
		
	//metodos
	public:
		Usuario(string nombre, string telefono, string email);
			 virtual void mostrarDatos() const = 0;
	
	};
#endif
