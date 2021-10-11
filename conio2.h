#define SE 15
#define NS 4
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128
#include <time.h>
#define temp 100

void textcolor(int fontcolor)
{
   HANDLE screen;

   screen = GetStdHandle(STD_OUTPUT_HANDLE);
  int color_attribute;
  color_attribute = fontcolor;
  SetConsoleTextAttribute(screen,color_attribute);
}


void clrscr()
{
   system("cls");
}


void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}
void apaga_mensagem(int x, int y, int q)
{
	gotoxy(x, y);
	for(int i = 0; i < q; i++)
		printf(" ");
}
void apaga_caixa(int x, int y, int alt, int larg)
{
	for(int i = 1; i < alt+7; i++)
	{
		apaga_mensagem(x+1, y+i, larg);
	}
}

void mudacor(int &f1, int &f2, int &f3, int dir)
{
	switch(dir)
	{
		case 72:
			if(f1 == SE)
			{
				f3=SE;
				f1=NS;
			}
			else if(f2 == SE)
			{
				f1=SE;
				f2=NS;
			}
			else
			{
				f3=NS;
				f2=SE;
			}
		break;
		case 80:
			if(f1 == SE)
			{
				f1=NS;
				f2=SE;
			}
			else if(f2 == SE)
			{
				f2=NS;
				f3=SE;
			}
			else
			{
				f1=SE;
				f3=NS;
			}
		break;
	}
}
