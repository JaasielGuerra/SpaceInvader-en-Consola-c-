//nave del jugador
#ifndef SHIP_H_INCLUDED
#define SHIP_H_INCLUDED
#include "vector2.h"
#include "screen.h"
#include <windows.h>
#include <iostream>
#include <list>
#include "bullet.h"

using namespace std;

class Ship{
	
protected:
	vector2 				dir;
	float 					x, y,speed;
	list<Bullet*> 			bal;
	list<Bullet*>::iterator it;
	
public:
	Ship(float,float,float);
	void mov(float);		//movimiento 
	void draw();	//pintar 
	void erase();
	void shot(float);	
};



#endif //SHIP_H_INCLUDE
