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
			  void informacioUsuario(vector<Usuario*>& usuarios); // Muestra todos los usuarios
			  void informacioUsuario(Usuario* usuario); // Muestra un solo usuario
			  
			  void informacionAcademico(vector<Academico*>& academicos); // Muestra todos los académicos
			  void informacionAcademico(Academico* academico);  // Muestra un solo académico
			  
			  void mostraInformacion(vector<Usuario*>& usuarios, vector<Academico*>& academicos);//muestra la informacion de todos los usuarios(academicos y alumnos)
			  void mostraSubmenu(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros, Usuario* usuario, Academico* academico);
			  
			  // Métodos para buscar usuario
			  void buscarUsuario(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros);
			  
			  //Métodos para gestionar el historial
			  void historialUsuarios(Usuario* usuario);// Muestra todo el historial de los usuarios
			  void historialAcademico(Academico* academico);// Muestra todo el historial de los academicos
			  
			  // Métodos para buscar libros
			  void buscarLibro(vector<Libro>& libros);
			
   };
#endif

