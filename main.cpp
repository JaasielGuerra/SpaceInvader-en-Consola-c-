/*
	Nombre: Space Invader en consola con Dev C++ 
	Copyright: Juego creado sin fines de lucro
	Autor: Jaasiel Guerra Estudiante Universitario de Ingenieria en sistemas, UMG Zacapa
	Fecha: 14/07/19 21:42
	Descripcion: Space Invader en consola es una copia del Space Invader que surgio
	en 1978, realizado con el fin de practicar el lenguaje C++
*/

#include "Game.h"


int main() {
		
	Game juego;
	juego.init();
	juego.run();
	
	return 0;
}
