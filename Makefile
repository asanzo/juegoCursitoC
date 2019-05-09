
limpiar: 
	rm saludar.o

saludar.o:
	gcc -c saludar.c

hacerModuloA: saludar.o
	gcc juego.c saludar.o

hacerModuloB: saludar.o
	gcc otro.c saludar.o

all: limpiar hacerModuloA hacerModuloB