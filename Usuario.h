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
	private:
		string carrera;
		string codigoEstudiante;
		
		
	//metodos
	public:
		Usuario(string nombre, string telefono, string email,string carrera = "", string codigoEstudiante = "");
			  void mostrarDatos() const;
			 
		// Métodos para acceder a los atributos privados
		string getCarrera() const {return carrera; }
		string getCodigo() const {return codigoEstudiante; }
	
	};
#endif
