/*********Some useful funtions**************
**move the cusor to (x,y)
**void gotoxy(unsigned int x,unsigned int y)
**
**
**/
#ifndef XCAHP_H
#define XCAHP_H

#include <windows.h>

void gotoxy(unsigned int,unsigned int);
void hidecusor();
void showcusor();


void gotoxy(unsigned int x,unsigned int y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(hOut,pos);
}
void hidecusor()
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=false;
	SetConsoleCursorInfo(hOut,&cci);
}
void showcusor()
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=true;
	SetConsoleCursorInfo(hOut,&cci);
}
#endif