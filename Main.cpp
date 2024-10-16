#include "Academico.h"
#include "Usuario.h"
#include "Libro.h"
#include "Administrador.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;


//se encarga de mostra el menu de opciones al Bibliotecario
void mostrarMenu() {
    cout << "1. Agregar usuario" << endl;
    cout << "2. Agregar academico" << endl;
    cout << "3. Eliminar academico" << endl;
    cout << "4. Eliminar usuario" << endl;
    cout << "5. Agregar libro" << endl;
    cout << "6. Eliminar libro" << endl;
    cout << "7. Mostra  usuarios" << endl;
    cout << "8. Salir" << endl;
}

// Función para limpiar la pantalla
void limpiarPantalla() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");  // Limpiar pantalla en Windows
    #else
        system("clear");  // Limpiar pantalla en Linux/Mac
    #endif
}

int main(){
	vector<Libro> libros;  //lista de libros
	 vector<Usuario*> usuarios;  //lista de usuarios
	 vector<Academico*> academicos;  //lista de academicos
	
	 // Crear un administrador
    Bibliotecario bibliotecario("Bibliotecario", "123456789", "admin@biblioteca.com");
    
    
    int opcion;
    //se encarga de mostra el menu para el usuario
    do{
		mostrarMenu();
		cout<<"Seleccione una opción: ";
		cin>> opcion;
		
		switch(opcion){
			case 1: {
				//agregar usuario
				string  nombre, telefono, email, carrera, codigoEstudiante;
				
				
				cout<<"Nombre del usuario: ";
				cin>>nombre;
				cout<<"Numero de telefono ";
				cin>>telefono;
				cout<<"Dime tu email: ";
				cin>>email;
				cout<<"Dime tu carrera: ";
				cin>>carrera;
				cout<<"Dime tu codigo de estudiante: ";
				cin>>codigoEstudiante;
				
				Usuario* nuevoUsuario = new Usuario(nombre, telefono, email, carrera, codigoEstudiante);
				bibliotecario.agregarUsuario(usuarios, nuevoUsuario);
				limpiarPantalla();
				break;
				}
			case 2: {
				//agregar academico
				string  nombre, telefono, email, nivelAcademico, departamentoAcademico;
				
				
				cout<<"Nombre del nombre de academico: ";
				cin>>nombre;
				cout<<"Numero de telefono ";
				cin>>telefono;
				cout<<"Dime tu email: ";
				cin>>email;
				cout<<"Dime tu nivel academico: ";
				cin>>nivelAcademico;
				cout<<"Dime tu codigo de departamento academico: ";
				cin>>departamentoAcademico;
				
				Academico* nuevoAcademico = new Academico(nombre, telefono, email, nivelAcademico, departamentoAcademico);
				bibliotecario.agregarAcademico(academicos, nuevoAcademico);
				limpiarPantalla();
				break;
				}
			case 3: {
				// Eliminar academico
				string nombreAcademico;
				 cout << "Nombre del academico a eliminar: ";
				 cin >> nombreAcademico;
				 bibliotecario.eliminarAcademico(academicos, nombreAcademico); 
				 
				 break;
				}
			case 4: {
				// Eliminar usuario
				string nombre;
				 cout << "Nombre del usuario a eliminar: ";
				 cin >> nombre;
				 bibliotecario.eliminarUsuario(usuarios, nombre); 
				 
				 break;
				}
			case 5: {
				//agregar libro
				string  titulo, autor;
				
				
				cout<<"Titulo del libro: ";
				cin>>titulo;
				cout<<"Autor del libro ";
				cin>>autor;
				bibliotecario.agregarLibro(libros, titulo, autor);
				
				limpiarPantalla();
				break;
				}
			case 6: {
					// Eliminar libro
				string titulo;
				 cout << "Titulo del libro a eliminar: ";
				 cin >> titulo;
				 bibliotecario.eliminarLibro(libros, titulo);
				 break;
				} 
			case 7: {
					//Mostra informacion de usuario
					bibliotecario.mostrarUsuario(usuarios);
					
					break;
				}
			case 8:
				 cout << "Saliendo..." << endl;
				 limpiarPantalla();
            break;
        default:
            cout << "Opción no válida." << endl;
            limpiarPantalla();
            break;
			}
		} while (opcion != 8);
		
		//Liberar memoria de usuarios
		 for (Usuario* usuario : usuarios) {
        delete usuario;
	}
	return 0;
}
