#ifndef LIBBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
#include <ctime>


using namespace std;

//Super clase de usuario
class Libro{
	//atributos
	private:
		string titulo;
		string autor;
		bool prestado;
		time_t fechaDevolucion;
	
		
		
	//metodos
	public:
		Libro(string titulo, string autor);
		
		void prestarLibro(int dias);
		void devolverLibro();
		void mostrarDatos() const;//mostramos el libro
		bool estadoLibro();
		time_t tiempoRestante();
		
		// Métodos para acceder a los atributos privados
		string getTitulo() const {return titulo; }
		string getAutor() const {return autor; }
			 
	};
#endif
