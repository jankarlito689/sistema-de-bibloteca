#include "Administrador.h"
#include <limits>

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


// Agregar alumno
void Bibliotecario::agregarUsuario(vector<Usuario*>& usuarios,Usuario* nuevoUsuario) {
     usuarios.push_back(nuevoUsuario);
    cout << "Usuario '" << nuevoUsuario->nombre << "' agregado exitosamente." <<endl;
}


// Eliminar alumno
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

// Agregar academico
void Bibliotecario::agregarAcademico(vector<Academico*>& academicos,Academico* nuevoAcademico) {
     academicos.push_back(nuevoAcademico);
    cout << "Academico '" << nuevoAcademico->nombre << "' agregado exitosamente." <<endl;
}

// Eliminar academico
void Bibliotecario::eliminarAcademico(vector<Academico*>& academicos, const string& nombre){
    for (auto it = academicos.begin(); it != academicos.end(); ++it) {
         if ((*it)->nombre == nombre) {  // Acceso correcto al atributo nombre
            cout << "Academico '" << (*it)->nombre << "' eliminado exitosamente." << endl;
            delete *it;  // Liberar la memoria del academico
            academicos.erase(it);  // Eliminar el academico del vector
            return;
        }
    }
    cout << "El Academico '" << nombre << "' no se encontró en el sistema." << endl;
} 

//Métodos para mostrar la informacion de academico
void Bibliotecario::informacionAcademico(vector<Academico*>& academicos){
	if (academicos.empty()) {
			cout << "No hay academicos registrados." << endl;
			return;
		}
		
	for (const auto& Academico : academicos){
		cout << "Nombre: " << Academico->nombre<< endl;
        cout << "Teléfono: " << Academico->telefono<< endl;
        cout << "Email: " << Academico->email<< endl;
        cout << "Nivel academico: " << Academico->getNivelacademico() << endl;
        cout << "Departamento academico: " << Academico->getDepartamentoAcademico() << endl;
        cout << "---------------------------" << endl;
		}
	}
	
//Métodos para mostrar la informacion de usuarios
void Bibliotecario::informacioUsuario(vector<Usuario*>& usuarios){
	  if (usuarios.empty()) {
			cout << "No hay usuarios registrados." << endl;
			return;
		}

	for (const auto& Usuario : usuarios){
		cout << "Nombre: " << Usuario->nombre<< endl;
        cout << "Teléfono: " << Usuario->telefono<< endl;
        cout << "Email: " << Usuario->email<< endl;
        cout << "Carrera: " << Usuario->getCarrera() << endl;
        cout << "codigo de estudiante: " << Usuario->getCodigo() << endl;
        cout << "---------------------------" << endl;
		}
		
	}
	
//Mostrar toda la información de usuarios y académicos
void Bibliotecario::mostraInformacion(vector<Usuario*>& usuarios, vector<Academico*>& academicos){
	
		 cout << "=== Información de Usuarios ===" << endl;
					informacioUsuario(usuarios);
		 cout << endl;
		 
		 cout << "=== Información de Academicos ===" << endl;
					informacionAcademico(academicos);
		 cout << endl;
	}

// mostrar el historial del usuario alumno o academico
void Bibliotecario::mostraHistorial(vector<Usuario*>& usuarios, vector<Academico*>& academicos){
		cout << "=== Historial de Préstamos de Usuarios ===" << endl;
		for(Usuario* usuario : usuarios){
				usuario->HistorialLibros();
				cout << "---------------------------" << endl;
			}
			
		 cout << "\n=== Historial de Préstamos de Académicos ===" << endl;
		 for (Academico* academico : academicos) {
				academico->HistorialLibros();
				cout << "---------------------------" << endl;
		}
	}

//Mostrar submenu de opciones administrativas
void Bibliotecario::mostraSubmenu(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros, Usuario* usuario){
		//variable de del segundo sub menu
		int opcion;
		do {
			cout << "\n--- Submenú para " << usuario->nombre<< " ---" << endl;
			cout << "1. Pedir un libro nuevo" << endl;
			cout << "2. Devolver libros" << endl;
			cout << "3. Ver historial de libros" << endl;
			cout << "4. Regresar al menú principal" << endl;
			cout << "Seleccione una opción: ";
			
			// Validar la entrada del usuario
			while(!(cin >> opcion) || opcion <1 || opcion >4){
					  cout << "Entrada inválida. Por favor ingrese una opción válida (1-4): ";
					  cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			cin.ignore();  // Limpiar buffer de entrada
			
				switch (opcion) {
					case 1:{
                // Pedir un libro nuevo
                string titulo;
                cout << "Ingrese el título del libro que desea pedir: ";
                getline(cin, titulo);

                bool encontrado = false;
                for (Libro& libro : libros) {
                    if (libro.titulo == titulo) {
                        if (!libro.estadoLibro()) {  // Si el libro no está prestado
                            libro.prestarLibro(7);  // Prestar el libro por 7 días, por ejemplo
                            usuario->agregarAlHistorial(titulo);  // Agregar al historial
                            cout << "Libro '" << titulo << "' ha sido prestado a " << usuario->nombre << "." << endl;
                        } else {
                            cout << "El libro '" << titulo << "' ya está prestado." << endl;
                        }
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "El libro '" << titulo << "' no se encontró en el sistema." << endl;
                }
                break;
            }
					case 2:
						
							break;
					case 3:
						mostraHistorial(usuarios, academicos);
							break;
					case 4:
						cout << "Regresando al menú principal..." << endl;
							break;
					default:
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
				}
		} while (opcion != 4);  // Mantener en el submenú hasta que el usuario elija regresar
	}

//Métodos para buscar usuarios
void Bibliotecario::buscarUsuario(vector<Usuario*>& usuarios, vector<Academico*>& academicos, vector<Libro>& libros){
		string nombre;//variable donde se guarda el nombre a buscar
		
		cout << "Ingrese el nombre del usuario o académico a buscar: ";
			getline(cin, nombre);
			
		bool encontrado = false;
		
		 // Buscar en la lista de usuarios
		 for(Usuario* usuario : usuarios){
				if(usuario->nombre == nombre){
					cout << "Usuario encontrado: " << endl;
					informacioUsuario(usuarios);// Mostrar información del usuario encontrado
					mostraSubmenu(usuarios,academicos,libros,usuario);// Llamar al submenú para el usuario
					encontrado = true;
						break;
					}
			 }
		 // Si no se encuentra en usuarios, buscar en la lista de académicos
		 if(!encontrado){
				for(Academico* academico : academicos){
						if(academico->nombre == nombre){  
							cout << "Académico encontrado: " << endl;
							informacionAcademico(academicos);// Mostrar información del usuario encontrado
							mostraSubmenu(usuarios, academicos, libros, academico);// Llamar al submenú para el usuario
							encontrado = true;
								break;
							}
					}
			 }
		if (!encontrado) {
			cout << "Usuario o académico no encontrado." << endl;
		}
	}
	
//Métodos para buscar libros
void Bibliotecario::buscarLibro(vector<Libro>& libros){
		string titulo;
		
		cout << "Ingrese el título del libro a buscar: ";
			getline(cin, titulo);
			
		bool encontrado = false;
		
		for(Libro libro : libros){
				if(libro.titulo == titulo){
					cout << "Libro encontrado: " << endl;
					cout << "Título: " << libro.titulo << endl;
					cout << "Autor: " << libro.autor << endl;
					encontrado = true;
					break;
				}
			}
		if (!encontrado) {
        cout << "Libro '" << titulo << "' no encontrado." << endl;
		}
	}
