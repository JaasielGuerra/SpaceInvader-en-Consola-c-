//implementacion de Ship
#include "ship.h"




Ship::Ship(float pos_x, float pos_y, float _speed)
{		 
	this-> x = pos_x;
	this-> y = pos_y;
	this-> speed = _speed;
	this->_shot = false;	
}

void Ship::mov()
{
	dir = vector2();	//reinicia dir a cero
	
	//comprobar entradas 
	if (GetAsyncKeyState(VK_LEFT) and x > 5)
	   this->dir.x = -1.0f;
	if (GetAsyncKeyState(VK_RIGHT) and x < 53)
	   this->dir.x = 1.0f;
 	
 	//actualizar posicion	
	this->x += dir.x * speed ;
	this->y += dir.y * speed ;
	   
}

void Ship::draw()
{
	this->erase();
	this->mov();
	color(10);
	gotoxy(x + 1,y); 	 cout <<(char)254;
	gotoxy(x,y + 1); cout <<(char)223<<(char)223<<(char)223;
	
}

void Ship::erase()
{
	gotoxy(x + 1,y); cout << " ";
	gotoxy(x,y + 1); cout <<"   ";
}

void Ship::shot()
{
	if (GetAsyncKeyState(VK_SPACE) and bal.empty())
	{
		bal.push_back(new Bullet(x+1,y-1,0.5f));

	}
	for( it = bal.begin(); it != bal.end(); it++ )
	{
		if( (*it)->draw() ){gotoxy((*it)->getX(),(*it)->getY()); cout<<" ";
		delete (*it); it = bal.erase(it); }
	}
}
