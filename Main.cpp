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
    cout << "2. Eliminar usuario" << endl;
    cout << "3. Agregar libro" << endl;
    cout << "4. Eliminar libro" << endl;
    cout << "5. Mostra informacion de usuario" << endl;
    cout << "6. Salir" << endl;
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
				string  nombre, telefono, email;
				
				
				cout<<"Nombre del usuario: ";
				cin>>nombre;
				cout<<"Numero de telefono ";
				cin>>telefono;
				cout<<"Dime tu email: ";
				cin>>email;
				
				Usuario* nuevoUsuario = new Usuario(nombre, telefono, email);
				bibliotecario.agregarUsuario(usuarios, nuevoUsuario);
				limpiarPantalla();
				break;
				}
			case 2: {
				// Eliminar usuario
				string nombre;
				 cout << "Nombre del usuario a eliminar: ";
				 cin >> nombre;
				 bibliotecario.eliminarUsuario(usuarios, nombre); 
				 
				 break;
				}
			case 3: {
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
			case 4: {
					// Eliminar libro
				string titulo;
				 cout << "Titulo del libro a eliminar: ";
				 cin >> titulo;
				 bibliotecario.eliminarLibro(libros, titulo);
				 break;
				} 
			case 5: {
					//Mostra informacion de usuario
					bibliotecario.mostrarUsuario(usuarios);
					
					break;
				}
			case 6:
				 cout << "Saliendo..." << endl;
				 limpiarPantalla();
            break;
        default:
            cout << "Opción no válida." << endl;
            limpiarPantalla();
            break;
			}
		} while (opcion != 6);
		
		//Liberar memoria de usuarios
		 for (Usuario* usuario : usuarios) {
        delete usuario;
	}
	return 0;
}
