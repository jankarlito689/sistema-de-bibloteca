#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

using namespace std;
//Super clase de usuario
//heredan de ella academicos 
class Usuario{
	//atributos
	public:
		string nombre;
		string telefono;
		string email;
	private:
		string carrera;
		string codigoEstudiante;
		
		
	//metodos
	public:
		Usuario(string nombre, string telefono, string email,string carrera = "", string codigoEstudiante = "");
		
		// Métodos para acceder a los atributos privados
		string getCarrera()  {return carrera; }
		string getCodigo() {return codigoEstudiante; }
	
	};
#endif
