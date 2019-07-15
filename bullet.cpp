//implementacion de la bala
#include "bullet.h"

Bullet::Bullet(float _x, float _y, float _speed)
{
	this->x = _x;
	this->y = _y;
	this->speed = _speed;
	dir = vector2(0.0f,-1.0f);
}

bool Bullet::draw()
{
	this->erase();//borrar
	
	//actualizar pos
	if(this->y > 2 )
	{
		this->x += dir.x * speed;
		this->y += dir.y * speed;

	}
	color(15);
	gotoxy(x,y); cout<<(char)203;
	
	return( this->y <= 2);
}

void Bullet::erase()
{
	gotoxy(x,y); cout <<" ";
}
