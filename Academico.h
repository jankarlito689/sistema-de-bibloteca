#ifndef ACADEMICO_H
#define ACADEMICO_H


//Importamos libbreria usuario
#include "Usuario.h"

using namespace std;

//declaro clase de academico
class Academico : public Usuario{
		public:
		Academico(string nombre, string telefono, string email);
			 void mostrarDatos() const override;
};
#endif
