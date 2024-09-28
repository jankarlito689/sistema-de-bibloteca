CXX = g++
CXXFLAGS = -std=c++11 `fltk-config --cxxflags`
LDFLAGS = `fltk-config --ldflags`
SOURCES = Main.cpp  Usuario.cpp Administrador.cpp libro.cpp Academico.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = fltk_test

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Regla para ejecutar el programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)
