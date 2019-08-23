#include "Game.h"
//clase encargada del juego

Game::~Game()//definicion del destructor
{
	delete nav;
	delete[] enem;
}

bool Game::init(void)//iniciar todos los componentes del juego
{
	this->delta = clock();
	this->TimeBegin = clock();
	this->TimeLast = clock();
	system("mode con: cols=60 lines=35");//tamanio de ventana
	hideCursor(false); //ocultatar el cursor
	rect(57,33);//pinta marco de limite
	
	this->nav = new Ship(25 , 31 , 60.0f);

	for (int i = 0; i < ROW; i++)//instanciar a los enemigos
	 	for (int j = 0; j < COLUMN ; j++)
	 		enem[i][j] = new Enemy(5 + (3 * j), 2 + (2 * i), 0);
}

void Game::run()//correr juego
{
	
	while(delta >= 0)
	{
 	   this->TimeBegin = clock();//inicio del tiempo
 	   
	   this->update(delta);//atualizar el juego
	   
 	   this->TimeLast = clock();//despues de actualizar el juego
 	   
	   this->delta = (TimeLast - TimeBegin) / CLOCKS_PER_SEC;//calcular delta
		
	}
	
}

void Game::update(float delta)// se encarga de actualizar el juego
{
	this->nav->mov(delta);
	this->nav->shot(delta);
	
	for (int i = 0; i < ROW; i++)
 		for (int j = 0; j < COLUMN ; j++)
			this->enem[i][j]->draw();
	
}
