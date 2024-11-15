//importamos librerias
#include "Usuario.h"
//agrego props a usuario
Usuario::Usuario(string nombre, string telefono, string email, string carrera, string codigoEstudiante)
	:nombre(nombre), telefono(telefono), email(email), carrera(carrera), codigoEstudiante(codigoEstudiante){}

// Agrega un libro al historial del usuario
void Usuario::agregarAlHistorial(const string& titulo){
	historialLibros.push_back(titulo);
	}

// Muestra el historial de libros del usuario
void Usuario::HistorialLibros() const{
		if (historialLibros.empty())
		{
			cout << nombre << " no tiene libros en su historial." << endl;
		}else{
			cout << "Historial de libros de " << nombre << ":" << endl;
			for (const string& libro : historialLibros) {
				cout << "- " << libro << endl;
			}
		}
	}
