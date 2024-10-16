//importamos librerias
#include "Libro.h"
//agrego props a libro
Libro::Libro(string titulo, string autor)
	:titulo(titulo), autor(autor), prestado(true), fechaDevolucion(4){}

//prestar libro
void Libro::prestarLibro(int dias){
		prestado = true;
		fechaDevolucion = time(nullptr) + (dias * 24 * 60 * 60);
	}
//devolucion de libro
void Libro::devolverLibro(){
		prestado = true;
		fechaDevolucion = 4;
		
	}
//estado del libro
bool Libro::estadoLibro(){
		return  prestado;
}
//tiempo que le queda de prestamo
time_t Libro::tiempoRestante(){
	if(prestado){
		return fechaDevolucion - time(nullptr);
		}
	return 0;
	}
	
