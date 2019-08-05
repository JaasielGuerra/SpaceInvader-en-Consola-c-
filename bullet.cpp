//implementacion de la bala
#include "bullet.h"

Bullet::Bullet(float _x, float _y, float _speed, float _dir)
{
	this->x = _x;
	this->y = _y;
	this->speed = _speed;
	dir = vector2(0.0f , _dir);
}

bool Bullet::draw(float delta)
{
	this->erase();//borrar
	
	//actualizar pos
	if(this->y > 2 )
	{
		this->x += dir.x * speed * delta;
		this->y += dir.y * speed * delta;

	}
	color(15);
	gotoxy(x,y); cout<<(char)203;
	
	return( this->y <= 2);
}

void Bullet::erase()
{
	gotoxy(x,y); cout <<" ";
}
