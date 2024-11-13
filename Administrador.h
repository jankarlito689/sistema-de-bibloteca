#ifndef ADMINISTRADOR_H
#define ADMINISRADOR_H

#include "Usuario.h"
#include "Academico.h"
#include "Libro.h"
#include  <vector>


using namespace std;

class Bibliotecario : public Usuario {
	
	//metodos
		public:
			Bibliotecario(string nombre, string telefono, string email);
			
			// Métodos para gestionar libros
			 void agregarLibro(vector<Libro>& libros, const string& titulo, const string& autor);
			 void eliminarLibro(vector<Libro>& libros, const string& titulo);
			 
			 // Métodos para gestionar usuarios
			  void agregarUsuario(vector<Usuario*>& usuarios, Usuario* nuevoUsuario);
			  void eliminarUsuario(vector<Usuario*>& usuarios, const string& nombre);
			  
			  // Métodos para gestionar academicos
			  void agregarAcademico(vector<Academico*>& academicos, Academico* nuevoAcademico);
			  void eliminarAcademico(vector<Academico*>& academicos, const string& nombre);
			  
			  
			  //Métodos para mostrar la informacion de usuario y academico
			  void informacioUsuario(vector<Usuario*>& usuarios);
			  void informacionAcademico(vector<Academico*>& academicos);
			  void mostraInformacion(vector<Usuario*>& usuarios, vector<Academico*>& academicos);
			  void mostraSubmenu(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros, Usuario* usuario);
			  // Métodos para buscar usuario
			  void buscarUsuario(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros);
			  
			  // Métodos para buscar libros
			  void buscarLibro(vector<Libro>& libros);
			
   };
#endif

