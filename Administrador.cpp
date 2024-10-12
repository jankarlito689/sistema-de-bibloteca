#include "Administrador.h"

using namespace std;


Bibliotecario::Bibliotecario(string nombre, string telefono, string email)
	: Usuario (nombre,telefono,email){}



// Agregar libro
void Bibliotecario::agregarLibro(vector<Libro>& libros, const string& titulo, const string& autor) {
     libros.emplace_back(titulo, autor);
    cout << "Libro '" << titulo << "' agregado exitosamente." <<endl;
}

// Eliminar libro
void Bibliotecario::eliminarLibro(vector<Libro>& libros, const string& titulo) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->titulo == titulo) {
            libros.erase(it);
				cout << "Libro '" << titulo << "' eliminado exitosamente." << endl;
            return;
        }
    }
    cout << "El libro '" << titulo << "' no se encontró en el sistema." << endl;
}


// Agregar usuario
void Bibliotecario::agregarUsuario(vector<Usuario*>& usuarios,Usuario* nuevoUsuario) {
     usuarios.push_back(nuevoUsuario);
    cout << "Usuario '" << nuevoUsuario->nombre << "' agregado exitosamente." <<endl;
}


// Eliminar libro
void Bibliotecario::eliminarUsuario(vector<Usuario*>& usuarios, const string& nombre){
    for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
         if ((*it)->nombre == nombre) {  // Acceso correcto al atributo nombre
            cout << "Usuario '" << (*it)->nombre << "' eliminado exitosamente." << endl;
            delete *it;  // Liberar la memoria del usuario
            usuarios.erase(it);  // Eliminar el usuario del vector
            return;
        }
    }
    cout << "El Usuario '" << nombre << "' no se encontró en el sistema." << endl;
} 


//Métodos para mostrar la informacion de usuario
void Bibliotecario::mostrarUsuario(vector<Usuario*>& usuarios){
	  if (usuarios.empty()) {
			cout << "No hay usuarios registrados." << endl;
			return;
		}
		
	cout << "No hay usuarios registrados." << endl;

	for (const auto& Usuario : usuarios){
		cout << "Nombre: " << Usuario->nombre<< endl;
        cout << "Teléfono: " << Usuario->telefono<< endl;
        cout << "Email: " << Usuario->email<< endl;
        cout << "---------------------------" << endl;
		}
	}
