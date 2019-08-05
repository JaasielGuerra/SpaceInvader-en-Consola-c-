//implementacion de la clase enemigo
#include "enemy.h"

Enemy::Enemy(float x, float y, float speed): Ship(x,y,speed){}

void Enemy::draw()
{
	color(15);
	gotoxy(x,y);cout <<(char)177<<(char)177;
}

void Enemy::mov()
{
	
	this->dir.x = 1;
}

void Enemy::erase()
{
	gotoxy(x,y);      cout << " ";
	gotoxy(x + 1, y); cout << " "; 
}
