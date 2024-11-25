TARGET = equal_to_the_last_one

# Archivos fuente
SRCS = equal_to_the_last_one.cc

# Archivos objeto generados a partir de los archivos fuente
OBJS = $(SRCS:.cc=.o)

# Regla por defecto: compilar el proyecto
all: $(TARGET)

# Regla para compilar el ejecutable a partir de los archivos objeto
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar archivos fuente a archivos objeto
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos objeto y el ejecutable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets para evitar conflictos con archivos que se llamen 'clean' o 'all'
.PHONY: all clean