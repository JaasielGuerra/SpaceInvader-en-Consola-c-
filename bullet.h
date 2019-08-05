#ifndef BULLET_H_INCLUDE
#define BULLET_H_INCLUDE
#include "vector2.h"
#include "screen.h"
#include <iostream>


using namespace std;

class Bullet{
private:
	vector2 dir;
	float x, y, speed;

public:
	Bullet(float , float , float , float);
	bool draw(float);
	void erase();
	int getX(){return x;}
	int getY(){return y;}
	
};

#endif //BULLET_H_INCLUDE
