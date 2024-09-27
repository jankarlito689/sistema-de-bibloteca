#include "Academico.h"
#include "Usuarios.h"
#include <iostream>

using namespace std;

int main(){
	//creamos un usuario academico
	Academico academico("Maria", "987654321", "maria@example.com", "Doctor en matematicas aplicadas", "matematicas");
	//creamos un usuario estudiante
	Usuario usuario("juan", "3322116655", "juan@escolar,com","licenciatura en ciencias de la cumuncacion","44774477414");
	
	
	//mostramos nuestros usuarios
	academico.mostrarDatos();
	usuario.mostrarDatos();
	
	}
