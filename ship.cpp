//implementacion de Ship
#include "ship.h"




Ship::Ship(float pos_x, float pos_y, float _speed)
{		 
	this-> x = pos_x;
	this-> y = pos_y;
	this-> speed = _speed;	
	
}

void Ship::mov(float delta)
{
	this->erase();
	dir = vector2();	//reinicia dir a cero
	
	//comprobar entradas 
	if (GetAsyncKeyState(VK_LEFT) and x > 5)
	   this->dir.x = -1.0f;
	if (GetAsyncKeyState(VK_RIGHT) and x < 53)
	   this->dir.x = 1.0f;
 	
 	//actualizar posicion	
	this->x += dir.x * speed * delta ;
	this->y += dir.y * speed * delta;
	
	//dibujar 
	this->draw();
	   
}

void Ship::draw()
{	

	color(10);
	gotoxy(x + 1,y); 	 cout <<(char)254;
	gotoxy(x,y + 1); cout <<(char)223<<(char)223<<(char)223;
	
}

void Ship::erase()
{
	gotoxy(x + 1,y); cout << " ";
	gotoxy(x,y + 1); cout <<"   ";
}

void Ship::shot(float delta)//metodo para disparo
{
	if (GetAsyncKeyState(VK_SPACE) and bal.empty())
	{
		bal.push_back(new Bullet(x+1,y-0.2f,40.0f,-1.0f));//agregar bala a la lista


	}
	for( it = bal.begin(); it != bal.end(); it++ )//iterar objetos bala
	{
		//si se salio de su limite borra de pantalla
		if( (*it)->draw(delta) ){gotoxy((*it)->getX(),(*it)->getY()); cout<<" ";
		delete (*it); it = bal.erase(it); }//eliminar la bala
	}
}
