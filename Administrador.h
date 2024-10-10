#ifndef ADMINISTRADOR_H
#define ADMINISRADOR_H

#include "Usuario.h"
#include "Libro.h"
#include  <vector>


using namespace std;

class Biblotecario : public Usuario {
	
	//metodos
		public:
			Biblotecario(string nombre, string telefono, string email);
			
			// Métodos para gestionar libros
			 void agregarLibro(vector<Libro>& libros, const string& titulo, const string& autor);
			 void eliminarLibro(vector<Libro>& libros, const string& titulo);
			 
			 // Métodos para gestionar usuarios
			  void agregarUsuario(vector<Usuario*>& usuarios, Usuario* nuevoUsuario);
			  void eliminarUsuario(vector<Usuario*>& usuarios, const string& nombre);
			
	};
	#endif

