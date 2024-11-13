#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
#include <ctime>


using namespace std;


class Libro{
	//atributos
	public:
		string titulo;
		string autor;
		bool prestado;
		time_t fechaDevolucion;
	
		
		
	//metodos
	
		Libro(string titulo, string autor);
		
		void prestarLibro(int dias);
		void devolverLibro();
		bool estadoLibro();
		time_t tiempoRestante();
			 
	};
#endif
