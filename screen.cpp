#include "screen.h"

//implementacion de la funcion gotoxy
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
 //ocultar cursor
 void hideCursor(bool hide)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = hide;
   SetConsoleCursorInfo(consoleHandle, &info);
}


void whScreen(int w, int h) {//me permita ajustal tamanio de la consola
	_COORD Coordenada;
	Coordenada.X = w;
	Coordenada.Y = h;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = h ;
	Rect.Bottom = w ;

	// Obtener el identificador  de la consola
	HANDLE Consola = GetStdHandle(STD_OUTPUT_HANDLE);

	// Ajustar el buffer al nuevo tamaño
	SetConsoleScreenBufferSize(Consola, Coordenada);

	// Cambiar tamaño de consola a lo especificado en el buffer
	SetConsoleWindowInfo(Consola, TRUE, &Rect);
}


void rect(int w, int h)//pinta marco resive ancho y alto
{
    for(int i = 2; i < w; i++){

        if(i == 2){
            gotoxy(i,1);printf("%c",201);
            gotoxy(w,1);printf("%c",187);
        }else{
            gotoxy(i,1); printf("%c",205);
            gotoxy(i,h); printf("%c",205);
        }
    }
    for(int i = 1; i < h; i++){

        if(i == 1){
            gotoxy(2,h);printf("%c",200);
            gotoxy(w,h);printf("%c",188);
        }else{
            gotoxy(2,i);printf("%c",186);
            gotoxy(w,i);printf("%c",186);
        }
    }
}

void color(int color){//dar color a los caracteres impresos en pantalla
	static HANDLE consola;
    consola = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( consola, color );
}

