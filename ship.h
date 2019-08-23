//nave del jugador
#ifndef SHIP_H_INCLUDED
#define SHIP_H_INCLUDED
#include "vector2.h"
#include "screen.h"
#include <windows.h>
#include <iostream>
#include <list>
#include "bullet.h"



class Ship{
	
protected:

	vector2 				dir;
	float 					x, y,speed;
	list<Bullet*> 			bal;//lista para objeto bala
	list<Bullet*>::iterator it;//iterador para objeto bala
	
public:
	Ship(float,float,float);//constructor
	void mov(float);		//movimiento recibe delta por referencia
	void draw();	//pintar 
	void erase();
	void shot(float);//para disparar, recibe delta por referencia
};



#endif //SHIP_H_INCLUDE
