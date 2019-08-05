//implementacion de vector2
#include "vector2.h"
#include <math.h>

vector2::vector2(void)
{
	this-> x = 0;
	this-> y = 0;
}

vector2::vector2(float _x, float _y)
{
	this-> x = _x;
	this-> y = _y;
}

void vector2::normalizar(void)//normalizar el vector asegunrandose
{							  //que la longitud sea siempre 1 (vector unitario)
	magnitud = sqrt( x*x + y*y );
	if (magnitud > 0)
	{
	   	this-> x /= magnitud;
		this-> y /= magnitud;
	}
}

