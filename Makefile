# Compilador y banderas
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Archivos fuente y objetos
SOURCES = Main.cpp Usuario.cpp Administrador.cpp libro.cpp Academico.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Nombre del ejecutable
EXECUTABLE = biblioteca

# Regla principal: compilar todo
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Regla para ejecutar el programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

