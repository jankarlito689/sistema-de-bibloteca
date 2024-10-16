//imporaciones
#include "Academico.h"
using namespace std;
//agrego props a usuario(constructor)
Academico::Academico(string nombre, string telefono, string email, string nivelAcademico, string departamentoAcademico)
	 :Usuario(nombre, telefono, email), nivelAcademico(nivelAcademico), departamentoAcademico(departamentoAcademico){}
	





