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
    cout << "1. Agregar universitario" << endl;
    cout << "2. Agregar academico" << endl;
    cout << "3. Eliminar academico" << endl;
    cout << "4. Eliminar usuario" << endl;
    cout << "5. Agregar libro" << endl;
    cout << "6. Eliminar libro" << endl;
    cout << "7. Mostra  usuarios" << endl;
    cout << "8. Buscar  usuario" << endl;
    cout << "9. Buscar  libro" << endl;
    cout << "10. Salir" << endl;
}

// Función para limpiar la pantalla
void limpiarPantalla() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");  // Limpiar pantalla en Windows
    #else
        system("clear");  // Limpiar pantalla en Linux/Mac
    #endif
}

// Función para pausar la consola 
void pause(){
		 cout << "Presione Enter para continuar..." << endl;
		 cin.ignore();
		 cin.get();
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
		limpiarPantalla();
		mostrarMenu();
		cout<<"Seleccione una opción: ";
		cin>> opcion;
		cin.ignore();
		
		switch(opcion){
			case 1: {
				//agregar usuario
				string  nombre, telefono, email, carrera, codigoEstudiante;
				
				cout << "Nombre del usuario: ";
                getline(cin, nombre);
                cout << "Número de teléfono: ";
                getline(cin, telefono);
                cout << "Email: ";
                getline(cin, email);
                cout << "Carrera: ";
                getline(cin, carrera);
                cout << "Código de estudiante: ";
                getline(cin, codigoEstudiante);
				
				Usuario* nuevoUsuario = new Usuario(nombre, telefono, email, carrera, codigoEstudiante);
				bibliotecario.agregarUsuario(usuarios, nuevoUsuario);
				pause();
				break;
				}
			case 2: {
				//agregar academico
				string  nombre, telefono, email, nivelAcademico, departamentoAcademico;
				
				cout << "Nombre del académico: ";
                getline(cin, nombre);
                cout << "Número de teléfono: ";
                getline(cin, telefono);
                cout << "Email: ";
                getline(cin, email);
                cout << "Nivel académico: ";
                getline(cin, nivelAcademico);
                cout << "Departamento académico: ";
                getline(cin, departamentoAcademico);
				
				Academico* nuevoAcademico = new Academico(nombre, telefono, email, nivelAcademico, departamentoAcademico);
				bibliotecario.agregarAcademico(academicos, nuevoAcademico);
				pause();
				break;
				}
			case 3: {
				// Eliminar academico
				string nombreAcademico;
				 cout << "Nombre del academico a eliminar: ";
				  getline(cin, nombreAcademico);
				 bibliotecario.eliminarAcademico(academicos, nombreAcademico); 
				 pause();
				 break;
				}
			case 4: {
				// Eliminar usuario
				string nombre;
				 cout << "Nombre del usuario a eliminar: ";
				  getline(cin, nombre);
				 bibliotecario.eliminarUsuario(usuarios, nombre); 
				 pause();
				 break;
				}
			case 5: {
				//agregar libro
				 string titulo, autor;
				
                cout << "Título del libro: ";
                getline(cin, titulo);
                cout << "Autor del libro: ";
                getline(cin, autor);
                bibliotecario.agregarLibro(libros, titulo, autor);
                
                pause();
				break;
				}
			case 6: {
					// Eliminar libro
				string titulo;
				
				 cout << "Titulo del libro a eliminar: ";
				 getline(cin,titulo);
				 bibliotecario.eliminarLibro(libros, titulo);
				 
				 pause();
				 break;
				} 
			case 7: {
					//Mostra informacion de usuario
					bibliotecario.mostraInformacion(usuarios, academicos);
					
					 pause();
					break;
				}
			case 8:{
				// Buscar usuario
				bibliotecario.buscarUsuario(usuarios, academicos);
					pause();
					break;
				}
			case 9:{
				 // Buscar libro
				 bibliotecario.buscarLibro(libros);
					
					pause();
					break;
				}
			case 10:
				 cout << "Saliendo..." << endl;
				 limpiarPantalla();
            break;
        default:
            cout << "Opción no válida." << endl;
            limpiarPantalla();
            break;
			}
		} while (opcion != 10);
		
		//Liberar memoria de usuarios
		 for (Usuario* usuario : usuarios) {
        delete usuario;
		}
	return 0;
}
