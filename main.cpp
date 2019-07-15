#include "lib.h"
#include "screen.h"
#include "ship.h"


int main() {

	system("mode con: cols=60 lines=35");//tamanio de ventana




	hideCursor(false); //ocultatar el cursor
	
	rect(57,33);
	
	
	
	

	Ship ship(25,31,0.75f);

	
	
	while (true)
	{
	
		
		ship.draw();
		ship.shot();
	
		
		
		Sleep(10);
	}
	

	return 0;
}
