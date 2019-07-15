//libreria de funciones para la pantalla
#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED
#include <stdio.h>  
#include <windows.h>  

void gotoxy(int x,int y);
void whScreen(int w, int h);
void hideCursor(bool);
void rect(int,int);
void color(int);
#endif //SCREEN_H_INCLUDED
