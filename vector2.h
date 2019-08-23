//clase para el manejo de vectores en dos dimensiones
#ifndef VECTOR2_H_INCLUDED
#define VECTOR2_H_INCLUDED

class vector2{
	public:
	float x;
	float y;
	float magnitud;
	vector2(void);
	vector2(float _x, float _y);
	void normalizar(void);
};


#endif //VECTOR2_H_INCLUDED
