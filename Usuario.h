#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Super clase de usuario,heredan de ella academicos 
class Usuario{
	//atributos
	public:
		string nombre;
		string telefono;
		string email;
	private:
		string carrera;
		string codigoEstudiante;
	protected:
		vector<string> historialLibros;  // Historial de libros solicitados
		
		
	//metodos
	public:
		Usuario(string nombre, string telefono, string email,string carrera = "", string codigoEstudiante = "");
		
		// Métodos para acceder a los atributos privados
		string getCarrera()  {return carrera; }
		string getCodigo() {return codigoEstudiante; }
		
		// Métodos para manejar el historial de libros
		void agregarAlHistorial(const string& titulo);
		void HistorialLibros() const;
	
	};
#endif
