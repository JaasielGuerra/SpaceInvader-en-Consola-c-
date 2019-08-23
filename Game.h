#ifndef GAME_H
#define GAME_H
#include "screen.h"
#include "ship.h"
#include "enemy.h"
#include <time.h>
/*
*CLase encargada del manejo del juego
*/

class Game
{
	public:
		~Game();//destructor
		bool init(void);
		void run(void);
		void update(float);
		
	protected://protegidos
		float TimeBegin, TimeLast, delta;
		Ship *nav;//nave jugador
		enum{//para colocar a los enemigos
			ROW = 5 ,COLUMN = 11
		};	
		Enemy *enem[ROW][COLUMN];//matriz de enemigos
			
};

#endif
