CC = g++
CFLAGS = -Wall -std=c++11
EXEC_NAME = RepEsp
INCLUDES = modele/includes/Carte.hpp modele/includes/Paquet.hpp modele/includes/PaquetFacile.hpp modele/includes/PaquetMoyen.hpp modele/includes/PaquetDifficile.hpp modele/includes/Paquets.hpp modele/includes/RepEsp.hpp modele/includes/main.hpp
LIBS =
OBJ_FILES = Carte.o Paquet.o PaquetFacile.o PaquetMoyen.o PaquetDifficile.o Paquets.o RepEsp.o main.o

all : $(EXEC_NAME)

clean :
	rm $(EXEC_NAME) $(OBJ_FILES)

$(EXEC_NAME) : $(OBJ_FILES) $(INCLUDES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o : modele/sources/%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
