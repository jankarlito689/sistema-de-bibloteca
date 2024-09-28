#include "Academico.h"
#include "Usuario.h"
#include "Libro.h"
#include <iostream>

using namespace std;

int main(){
	//creamos un usuario academico
	Academico academico("Maria", "987654321", "maria@example.com", "Doctor", "matematicas");
	//creamos un usuario estudiante
	Usuario usuario("juan", "3322116655", "juan@escolar,com","ciencias de la cumuncacion", "44774477414");
	
	 // Crear algunos libros
	 Libro libro("Clean Code", "Robert C. Martin");
	
	//mostramos nuestros usuarios
	academico.mostrarDatos();
	usuario.mostrarDatos();
	
	}
