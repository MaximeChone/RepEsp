CC = g++
CFLAGS = -Wall
EXEC_NAME = RepEsp
INCLUDES = modele/includes/Carte.h modele/includes/Paquet.h modele/includes/PaquetFacile.h modele/includes/PaquetMoyen.h modele/includes/PaquetDifficile.h modele/includes/Paquets.h modele/includes/RepEsp.h
LIBS =
OBJ_FILES = Carte.o Paquet.o PaquetFacile.o PaquetMoyen.o PaquetDifficile.o Paquets.o RepEsp.o

all : $(EXEC_NAME)

clean :
	rm $(EXEC_NAME) $(OBJ_FILES)

$(EXEC_NAME) : $(OBJ_FILES) $(INCLUDES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o : modele/sources/%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
