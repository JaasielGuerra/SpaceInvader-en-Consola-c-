//clase para crear los enemigos
#ifndef ENEMY_H_INCLUDE
#define ENEMY_H_INCLUDE
#include "ship.h"
#include "screen.h"

class Enemy: public Ship{//hereda de la clase nave
	
public:
	Enemy(float, float, float);
	void draw();
	void mov();
	void erase();
};

#endif // ENEMY_H_INCLUDE
