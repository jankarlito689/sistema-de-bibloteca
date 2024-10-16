#ifndef ACADEMICO_H
#define ACADEMICO_H


//Importamos libbreria usuario
#include "Usuario.h"

using namespace std;

//declaro clase de academico
class Academico : public Usuario{
	//agregamos atributos o proobs a mi clase academico exclusivas de academicos
	private:
		string nivelAcademico;
		string departamentoAcademico;
		
		//metodos
		public:
		Academico(string nombre, string telefono, string email,string nivelAcademico,string departamentoAcademico);
		
		// Métodos para acceder a los atributos privados
		string getNivelacademico() const {return nivelAcademico; }
		string getDepartamentoAcademico() const {return departamentoAcademico; }
};
#endif
