# sistema-de-bibloteca
El sistema de administración de libros para una biblioteca permitirá
a los administradores gestionar usuarios, libros y los préstamos de
manera eficiente. Este sistema contará con roles, específicamente
un usuario administrador, que será el encargado de todas las
funciones de control, y los usuarios regulares, quienes podrán
interactuar con los libros (préstamos y devoluciones).
El sistema debe registrar información de los usuarios y de los
libros, llevar un control de los préstamos, y generar alertas o
reportes sobre libros no devueltos a tiempo.
Módulos del Sistema
Módulo de Gestión de Usuarios
Este módulo será administrado por el usuario administrador y permitirá:
● Agregar nuevos usuarios: El administrador puede registrar a nuevos usuarios
solicitando datos como:
○ Nombre completo
○ Número de teléfono
○ Correo electrónico
● Eliminar o desactivar usuarios: El administrador puede eliminar usuarios que ya
no son activos o desactivarlos temporalmente.
● Ver y gestionar usuarios con adeudo: El sistema debe generar un reporte de
usuarios que tengan libros prestados que no han sido devueltos dentro del plazo
establecido. El administrador podrá ver:
○ Lista de usuarios con libros vencidos
○ Tiempo que llevan de retraso
○ Multas aplicadas, si es el caso.

Módulo de Gestión de Libros
Este módulo permitirá al administrador manejar todo el catálogo de libros:
● Agregar o eliminar libros: El administrador podrá registrar nuevos libros con la
siguiente información:
○ Título
○ Autor
○ ISBN
○ Año de publicación
○ Editorial
○ Número de ejemplares disponibles
○ Estado del libro (nuevo, usado, dañado, etc.)
● Buscar libros en el sistema: Búsqueda mediante filtros (título, autor, editorial, etc.).
● Ver el estado de los libros: El sistema debe mostrar si un libro está disponible o
prestado. En caso de estar prestado, debe mostrar:
○ El usuario que lo tiene
○ Fecha de préstamo
○ Tiempo restante para la devolución

Módulo de Préstamos
Este módulo se enfocará en el préstamo y la devolución de libros. Permitirá:
● Realizar préstamos: El sistema registrará el préstamo de un libro a un usuario,
indicando:
○ Fecha de préstamo
○ Fecha de devolución estimada (según la política de la biblioteca)
○ Multas en caso de retraso
● Estado del préstamo: El sistema indicará si el libro está:
○ Prestado
○ Disponible
○ Reservado
● Devoluciones: El administrador podrá marcar la devolución de un libro y el sistema
actualizará el inventario.
● Renovación de préstamo: Opción para que los usuarios puedan renovar el
préstamo del libro si no hay otras reservas en cola.
Módulo de Reportes y Alertas
Este módulo generará informes y alertas automáticas:
● Alertas de libros vencidos: El sistema enviará notificaciones automáticas (por
correo electrónico) a los usuarios con libros prestados cuyo tiempo de préstamo esté
por vencer o ya haya vencido.
● Reportes de uso: El administrador podrá generar reportes sobre:
○ Libros más prestados

○ Usuarios con más préstamos
○ Libros con retraso en la devolución
● Multas: En caso de libros no devueltos a tiempo, el sistema podrá calcular multas
automáticas según los días de retraso y generar el reporte correspondiente.
Módulo de Registro de Actividad
Este módulo mantendrá un registro detallado de todas las acciones realizadas dentro del
sistema:
● Registro de nuevos usuarios.
● Registro de préstamos y devoluciones.
● Cambios en el catálogo de libros (nuevas adiciones o eliminaciones).
● Registro de renovaciones de préstamo.
