#include <bits/stdc++.h>
#include <windows.h>
#include <MMSystem.h>

#include "conio2.h"
#include "TADPilha.h"

//Mateus Fonseca Santos & Victor Gabriel Viana Da Costa

void printPerdeu(int addl, int addc) {

	gotoxy(15 + addl, 4 + addc);
	printf("                                  ___                                ");
	gotoxy(15 + addl, 5 + addc);
	printf("                                 (   )                               ");
	gotoxy(15 + addl, 6 + addc);
	printf(" ___  ___    .--.    ___  ___     | |    .--.       .--.      .--.   ");
	gotoxy(15 + addl, 7 + addc);
	printf("(   )(   )  /    \\  (   )(   )    | |   /    \\    /  _  \\    /    \\  ");
	gotoxy(15 + addl, 8 + addc);
	printf(" | |  | |  |  .-. ;  | |  | |     | |  |  .-. ;  . .' `. ;  |  .-. ; ");
	gotoxy(15 + addl, 9 + addc);
	printf(" | |  | |  | |  | |  | |  | |     | |  | |  | |  | '   | |  |  | | | ");
	gotoxy(15 + addl, 10 + addc);
	printf(" | '  | |  | |  | |  | |  | |     | |  | |  | |  _\\_`.(___) |  |/  | ");
	gotoxy(15 + addl, 11 + addc);
	printf(" '  `-' |  | |  | |  | |  | |     | |  | |  | | (   ). '.   |  ' _.' ");
	gotoxy(15 + addl, 12 + addc);
	printf("  `.__. |  | '  | |  | |  ; '     | |  | '  | |  | |  `\\ |  |  .'.-. ");
	gotoxy(15 + addl, 13 + addc);
	printf("  ___ | |  '  `-' /  ' `-'  /     | |  '  `-' /  ; '._,' '  '  `-' / ");
	gotoxy(15 + addl, 14 + addc);
	printf(" (   )' |   `.__.'    '.__.'     (___)  `.__.'    '.___.'    `.__.'  ");
	gotoxy(15 + addl, 15 + addc);
	printf("  ; `-' '                                                            ");
	gotoxy(15 + addl, 16 + addc);
	printf("   .__.'                                                             ");
}

void apagaPerdeu() {

	gotoxy(11,4);
	printf("                                                                              ");
	gotoxy(11,5);
	printf("                                                                              ");
	gotoxy(11,6);
	printf("                                                                              ");
	gotoxy(11,7);
	printf("                                                                              ");
	gotoxy(11,8);
	printf("                                                                              ");
	gotoxy(11,9);
	printf("                                                                              ");
	gotoxy(11,10);
	printf("                                                                              ");
}

void lose() {

	system("cls");
	PlaySound(TEXT("../musicas/Super Mario Bros. - Game Over Sound Effect.wav"), NULL, SND_ASYNC);
	textcolor(LIGHTRED);
	printPerdeu(0,0);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(1,1);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(2,2);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(3,3);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(4,2);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(5,1);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(5,2);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(6,3);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(7,2);
	Sleep(5);
	apagaPerdeu();
	printPerdeu(8,3);
	
	getch();
}

void win() {

	PlaySound(TEXT("../musicas/Super Mario Bros. - Course Clear Sound Effect.wav"), NULL, SND_ASYNC);
	system("cls");
	for(int i=0; ; i++) {

		if(i == 7)
			i = 0;
		textcolor(i);
		gotoxy(25,2);
		printf("  __   __   U  ___ u   _   _                     U  ___ u  _   _     ");
		textcolor(i + 1);
		gotoxy(25,3);
		printf("  \\ \\ / /    \\/+_ \\/U |+|u| |     __        __    \\/+_ \\/ | \\ |+|    ");
		textcolor(i + 2);
		gotoxy(25,4);
		printf("   \\ V /     | | | | \\| |\\| |     \\+\\      /+/    | | | |<|  \\| |>   ");
		textcolor(i + 3);
		gotoxy(25,5);
		printf("  U_|+|_u.-,_| |_| |  | |_| |     /\\ \\ /\\ / /\\.-,_| |_| |U| |\\  |u   ");
		textcolor(i + 4);
		gotoxy(25,6);
		printf("    |_|   \\_)-\\___/  <<\\___/     U  \\ V  V /  U\\_)-\\___/  |_| \\_|    ");
		textcolor(i + 5);
		gotoxy(25,7);
		printf(".-,//|(_        \\   (__) )(      .-,_\\ /\\ /_,-.     \\    ||   \\,-. ");
		textcolor(i + 6);
		gotoxy(25,8);
		printf(" \\_) (__)     (__)      (__)      \\_)-'  '-(_/     (__)   (_+)  (_/  ");
		textcolor(i + 7);
		gotoxy(40,12);
		printf("        `.............        ");
		textcolor(i + 8);
		gotoxy(40,13);
		printf("   .:///+............+///:-   ");
		textcolor(i);
		gotoxy(40,14);
		printf("   //   /.`........../   //`  ");
		textcolor(i + 1);
		gotoxy(40,15);
		printf("   .::-` /`.........-- .-/-   ");
		textcolor(i + 2);
		gotoxy(40,16);
		printf("     .-:/+:``......-+//--     ");
		textcolor(i + 3);
		gotoxy(40,17);
		printf("         `-:-....-:-.         ");
		textcolor(i + 4);
		gotoxy(40,18);
		printf("            `-/-:`            ");
		textcolor(i + 5);
		gotoxy(40,19);
		printf("             :-./             ");
		textcolor(i + 6);
		gotoxy(40,20);
		printf("           --/:::::           ");
		textcolor(i + 7);
		gotoxy(40,21);
		printf("         :::::::::::/         ");
		textcolor(i + 8);
		gotoxy(40,22);
		printf("         `...........         ");	
		if(kbhit())
			break;
	}
	PlaySound(TEXT("../musicas/Sonic_Ring_Sound-KqgP0wGBa_Q.wav"), NULL, SND_ASYNC);
	textcolor(YELLOW);
	Sleep(400);
	gotoxy(60,10);
	printf("\\|/");
	gotoxy(58,11);
	printf("--   --");
	gotoxy(60,12);
	printf("/|\\");
	Sleep(500);
	getch();
}

void QuadroLogo(void) {

	int x, y;
	
	for(x = 2; x < 120; x++) {

		textcolor(GREEN);
		gotoxy(x,1);
		printf("=");
		gotoxy(x,9);
		printf("=");
		textcolor(LIGHTRED);
		gotoxy(x,10);
		printf("=");
		gotoxy(x,30);
		printf("=");
	}
	for(y = 2; y < 9; y++) {

		textcolor(GREEN);
		gotoxy(2,y);
		printf("|");
		gotoxy(119,y);
		printf("|");
	}
	for(y = 11; y < 30; y++) {

		textcolor(LIGHTRED);
		gotoxy(2,y);
		printf("|");
		gotoxy(119,y);
		printf("|");
	}
}

void Logo(void) {

	int x = 18, y = 2;
	 
	textcolor(YELLOW);
	gotoxy(x,y);
	printf(" _______                                _         _    _                     _ ");
	gotoxy(x,y + 1);
	printf("|__   __|                              | |       | |  | |                   (_)");
	gotoxy(x,y + 2);
	printf("   | | ___   _ __ _ __  ___  ___     __| | ___   | |__| |  __ _ _ __    ___  _ ");
	gotoxy(x,y + 3);
	printf("   | |// _ \\| '__| '__// _ \\//__|  // _` |// _ \\ |  __  |// _` | '_ \\ // _ \\| |");
	gotoxy(x,y + 4);
	printf("   | |  (_) | |  | | |  __//\\__ \\  | (_| |  __// | |  | |  (_| | | | |  (_) | |");
	gotoxy(x,y + 5);
	printf("   |_|\\___//|_|  |_|  \\___||___//  \\__,_|\\___|   |_|  |_| \\__,_|_| |_|\\___//|_|");                                                                                                  
}

void MenuInter(void) {

	QuadroLogo();
	Logo();
}

void Quadro(void) {

	int x, y;
	
	//Primeiro Quadro
	for(x = 3; x < 120; x++) {

		textcolor(LIGHTBLUE);
		gotoxy(x,1);
		printf("_");
	}
	for(x = 2; x < 120; x++) {

		textcolor(LIGHTBLUE);
		gotoxy(x,17);
		printf("_");
	}
	for(y = 2; y <= 17; y++) {

		textcolor(LIGHTBLUE);
		gotoxy(2,y);
		printf("|");
	}
	for(y = 2; y <= 17; y++) {

		textcolor(LIGHTBLUE);
		gotoxy(119,y);
		printf("|");
	}
	//Segundo Quadro
	for(x = 3; x < 120; x++) {

		textcolor(YELLOW);
		gotoxy(x,18);
		printf("_");
	}
	for(x = 2; x < 120; x++) {

		textcolor(YELLOW);
		gotoxy(x,29);
		printf("_");
	}
	for(y = 19; y <= 29; y++) {

		textcolor(YELLOW);
		gotoxy(2,y);
		printf("|");
	}
	for(y = 19; y <= 29; y++) {

		textcolor(YELLOW);
		gotoxy(119,y);
		printf("|");
	}
	textcolor(WHITE);
}

void Base(void) {

	int i, j, x, y;
	
	for(i = 0, x = 23; i < 68; i++, x++) {

		gotoxy(x,15);
		printf("%c",95);
		if(i == 12 || i == 34 || i == 56) {

			for(j = 0, y = 6; j < 10; j++, y++) {

				gotoxy(x,y);
				printf("%c",124);
			}
		}
	}
}

void Discos(TpPilhaM2 &pilha, int Prim, int Qtde) {

	int i, j, x, y, Aux, tam = 20, Cor;
	
	if(Prim == 0) {

		x = 25;
		y = 15;
		for(i = 0, Cor = 3; i < Qtde; i++, tam -= 2, y -= 1, x += 1, Cor++) {

			for(j = 0 , Aux = x ; j < tam ; j++, Aux++) {

				if(Cor % 3 == 0)
					textcolor(RED);
				else {

					if(Cor % 3 == 1)
						textcolor(GREEN);
					else
						textcolor(YELLOW);	
				}	
				gotoxy(Aux,y);
				printf("%c",219);
			}
			Inserir(pilha, 0, tam);
		}
	}
	else {

		if(Prim == 1) {

			x = 47;
			y = 15;
			for(i = 0, Cor = 3; i < Qtde; i++, tam -= 2, y -= 1, x += 1, Cor++) {

				for(j = 0, Aux = x; j < tam; j++, Aux++) {

					if(Cor % 3 == 0)
						textcolor(RED);
					else {

						if(Cor % 3 == 1)
							textcolor(GREEN);
						else
							textcolor(YELLOW);	
					}	
					gotoxy(Aux,y);
					printf("%c",219);
				}
				Inserir(pilha,1,tam);
			}
		}
		else {

			x = 69;
			y = 15;
			for(i = 0, Cor = 3; i < Qtde; i++, tam -= 2, y -= 1, x += 1, Cor++) {

				for(j = 0, Aux = x; j < tam; j++, Aux++) {
					if(Cor % 3 == 0)
						textcolor(RED);
					else {
						if(Cor % 3 == 1)
							textcolor(GREEN);
						else
							textcolor(YELLOW);	
					}	
					gotoxy(Aux,y);
					printf("%c",219);
				}
				Inserir(pilha,2,tam);
			}
		}
	}
}

void Discos2(TpPilhaM2 pilha, int p) {

	int c;
	if(p == 0) {
		
		while(!Vazia(pilha,0)) {

			c = (int)Retirar(pilha, 0);
			int y = 16 - pilha.cont[0] - 1;
			for(int x = 35 - c/2; x < 35 + c; x++) {

				gotoxy(x,y);
				printf("%c",219);
			}
		}
	}
	else if(p == 1) {

		while(!Vazia(pilha,1)) {

			c = (int)Retirar(pilha, 1);
			int y = 16 - pilha.cont[1] - 1;
			for(int x = 57 - c/2; x < 57 + c; x++) {

				gotoxy(x,y);
				printf("%c",219);
			}
		}
	}
	else {

		while(!Vazia(pilha,1)) {

			c = (int)Retirar(pilha, 1);
			int y = 16 - pilha.cont[1] - 1;
			for(int x = 79 - c/2; x < 79 + c; x++) {

				gotoxy(x,y);
				printf("%c",219);
			}
		}
	}
}

void PrintaBase(int torre) {

	if(torre == 0)
		gotoxy(23,15);
	else if(torre == 1)
		gotoxy(46,15);
	else
		gotoxy(66,15);
	printf("_______________________");
}

void Move(TpPilhaM2 pilha, int De, int Para, int Qtde) {

	int i, x, Tam, Ate;
	
	if(De == 0) {

		//Andar para cima
		for(i = 16 - pilha.cont[0]; i > 4; i--) {

			gotoxy(25,i);
			textcolor(WHITE);
			if(i > 5)
				printf("          |         ");
			else
				printf("                    ");
			if(i == 15)
				PrintaBase(De);
			Tam = ElemTopo(pilha,0);
			if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
				textcolor(RED);
			else {

				if(Tam == 4 || Tam == 10 || Tam == 16)
					textcolor(YELLOW);
				else
					textcolor(GREEN);	
			}		
			for(x = 35 - Tam / 2; x < 35 + Tam / 2; x++) {

				gotoxy(x,i - 1);
				printf("%c",219);
			}
			Sleep(30);
		}
		//Andar para o lado
		if(Para == 1) { 
			                                                       
			Ate = 57;
			for(x = 35; x < Ate; x++) {

				gotoxy(x + Tam/2, 4);
				printf("%c",219);
				gotoxy(x - Tam/2, 4);
				printf(" ");
				Sleep(10);
			}
			//Andar para baixo
			for(i = 4; i < 15 - pilha.cont[1]; i++) {

				Tam = ElemTopo(pilha, 0);
				if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
					textcolor(RED);
				else {

					if(Tam == 4 || Tam == 10 || Tam == 16)
						textcolor(YELLOW);
					else
						textcolor(GREEN);	
				}		
				for(x = 57 - Tam / 2; x < 57 + Tam / 2; x++) {
					
					gotoxy(x,i + 1);
					printf("%c",219);
				}
				gotoxy(47,i);
				textcolor(WHITE);
				if(i > 5)
					printf("          |         ");
				else
					printf("                    ");
				Sleep(30);
			}
		}
		//Andar para o lado
		else {

			Ate = 79;
			for(x = 35; x < Ate; x++) {

				gotoxy(x + Tam/2, 4);
				printf("%c",219);
				gotoxy(x - Tam/2, 4);
				printf(" ");
				Sleep(10);
			}
			//Andar para baixo
			for(i = 4; i < 15 - pilha.cont[2]; i++) {  

				Tam = ElemTopo(pilha,0);
				if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
					textcolor(RED);
				else {

					if(Tam == 4 || Tam == 10 || Tam == 16)
						textcolor(YELLOW);
					else
						textcolor(GREEN);	
				}		
				for(x = 79 - Tam / 2; x < 79 + Tam / 2; x++) {

					gotoxy(x,i + 1);
					printf("%c",219);
				}
				gotoxy(69,i);
				textcolor(WHITE);
				if(i > 5)
					printf("          |         ");
				else
					printf("                    ");
				Sleep(30);
			}
		}	
	}
	else {

		if(De == 1) {

			//Andar para cima
			for(i = 16 - pilha.cont[1]; i > 4; i--) {

				gotoxy(47,i);
				textcolor(WHITE);
				if(i > 5)
					printf("          |         ");
				else
					printf("                    ");
				Tam = ElemTopo(pilha,1);
				if(i == 15)
					PrintaBase(De);
				if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
					textcolor(RED);
				else {

					if(Tam == 4 || Tam == 10 || Tam == 16)
						textcolor(YELLOW);
					else
						textcolor(GREEN);	
				}			
				for(x = 57 - Tam / 2; x < 57 + Tam / 2; x++) {

					gotoxy(x,i - 1);
					printf("%c",219);
				}
				Sleep(30);
			}
			//Andar para o lado
			if(Para == 0) {

				Ate = 35;
				for(x = 57; x > Ate; x--) {

					gotoxy(x - Tam/2, 4);
					printf("%c",219);
					gotoxy(x + Tam/2, 4);
					printf(" ");
					Sleep(10);
				}
				//Andar para baixo
				for(i = 4  i < 15 - pilha.cont[0]; i++) {

					Tam = ElemTopo(pilha,1);
					if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
						textcolor(RED);
					else {

						if(Tam == 4 || Tam == 10 || Tam == 16)
							textcolor(YELLOW);
						else
							textcolor(GREEN);	
					}		
					for(x = 35 - Tam / 2; x < 35 + Tam / 2; x++) {

						gotoxy(x,i + 1);
						printf("%c",219);
					}
					gotoxy(25,i);
					textcolor(WHITE);
					if(i > 5)
						printf("          |         ");
					else
						printf("                     ");
					Sleep(30);
				}
			}
			//Andar para o lado
			else {

				Ate = 79;
				for(x = 57; x < Ate; x++) {

					gotoxy(x + Tam/2, 4);
					printf("%c",219);
					gotoxy(x - Tam/2, 4);
					printf(" ");
					Sleep(10);
				}
				//Andar para baixo
				for(i = 4; i < 15 - pilha.cont[2]; i++) {

					Tam = ElemTopo(pilha,1);
					if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
						textcolor(RED);
					else {

						if(Tam == 4 || Tam == 10 || Tam == 16)
							textcolor(YELLOW);
						else
							textcolor(GREEN);	
					}		
					for(x = 79 - Tam / 2; x < 79 + Tam / 2; x++) {

						gotoxy(x,i + 1);
						printf("%c",219);
					}
					gotoxy(69,i);
					textcolor(WHITE);
					if(i > 5)
						printf("          |         ");
					else
						printf("                    ");
					Sleep(30);
				}
			}		
		}
		else {

			//Andar para cima
			for(i = 16 - pilha.cont[2]; i > 4; i--) {

				gotoxy(69,i);
				textcolor(WHITE);
				if(i > 5)
					printf("          |         ");
				else
					printf("                    ");
				Tam = ElemTopo(pilha, 2);
				if(i == 15)
					PrintaBase(De);
				if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
					textcolor(RED);
				else {

					if(Tam == 4 || Tam == 10 || Tam == 16)
						textcolor(YELLOW);
					else
						textcolor(GREEN);	
				}		
				for(x = 79 - Tam / 2; x < 79 + Tam / 2; x++) {

					gotoxy(x,i - 1);
					printf("%c",219);
				}
				Sleep(30);
			}
			//Andar para o lado
			if(Para == 1) {

				Ate = 57;
				for(x = 79; x > Ate; x--) {

					gotoxy(x - Tam/2, 4);
					printf("%c",219);
					gotoxy(x + Tam/2, 4);
					printf(" ");
					Sleep(10);
				}
				//Andar para baixo
				for(i = 4; i < 15 - pilha.cont[1]; i++) {

					Tam = ElemTopo(pilha, 2);
					if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
						textcolor(RED);
					else {

						if(Tam == 4 || Tam == 10 || Tam == 16)
							textcolor(YELLOW);
						else
							textcolor(GREEN);	
					}		
					for(x = 57 - Tam / 2; x < 57 + Tam / 2; x++) {

						gotoxy(x,i + 1);
						printf("%c",219);
					}
					gotoxy(47,i);
					textcolor(WHITE);
					if(i > 5)
						printf("          |         ");
					else
						printf("                     ");
					Sleep(30);
				}
			}
			//Andar para o lado
			else {

				Ate = 35;
				for(x = 79; x > Ate; x--) {

					gotoxy(x - Tam/2, 4);
					printf("%c",219);
					gotoxy(x + Tam/2, 4);
					printf(" ");
					Sleep(10);
				}
				//Andar para baixo
				for(i = 4; i < 15 - pilha.cont[0]; i++) {

					Tam = ElemTopo(pilha, 2);
					if(Tam == 2 || Tam == 8 || Tam == 14 || Tam == 20)
						textcolor(RED);
					else
					{
						if(Tam == 4 || Tam == 10 || Tam == 16)
							textcolor(YELLOW);
						else
							textcolor(GREEN);	
					}		
					for(x = 35 - Tam / 2 ; x < 35 + Tam / 2 ; x++)
					{
						gotoxy(x,i + 1);
						printf("%c",219);
					}
					gotoxy(25,i);
					textcolor(WHITE);
					if(i > 5)
						printf("          |         ");
					else
						printf("                     ");
					Sleep(30);
				}
			}	
		}
	}
}

char menu(void) {

	gotoxy(50,16);
	printf("[1] - JOGAR");
	gotoxy(50,18);
	printf("[2] - SIMULAR");
	gotoxy(50,20);
	printf("[ESC] - SAIR");
	
	return getch();
}

void escolheTorre(int &ini, int &ter,int &disc) {

	MenuInter();
	gotoxy(50,14);
	printf("Torre inicial: ");
	ini = getche() - 48;
	while(ini < 1 || ini > 3) {

		clrscr();
		MenuInter();
		gotoxy(50,14);
		printf(" ** Apenas de 1 a 3 **");
		gotoxy(38,16);
		system("pause");
		clrscr();
		MenuInter();
		gotoxy(50,14);
		printf("Torre inicial: ");
		ini = getche() - 48;
	}
	gotoxy(50,16);
	printf("Torre De destino: ");	
	ter = getche() - 48;
	while(ter < 1 || ter >3 || ter == ini) {

		clrscr();
		MenuInter();
		gotoxy(40,14);
		printf(" ** Apenas de 1 a 3 e diferente da torre inicial **");
		gotoxy(38,16);
		system("pause");
		clrscr();
		MenuInter();
		gotoxy(50,16);
		printf("Torre De destino: ");
		ter = getch()-48;
	}
	gotoxy(50,18);
	printf("Quantidade de discos: ");
	scanf(" %d",&disc);
	while(disc < 3 || disc > 10) {

		clrscr();
		MenuInter();
		gotoxy(45,14);
		printf(" ** Apenas de 3 a 10 discos **");
		gotoxy(38,16);
		system("pause");
		clrscr();
		MenuInter();
		gotoxy(50,18);
		printf("Quantidade de discos: ");
		scanf(" %d",&disc);
	}
	clrscr();
}

void mover(int para, int de, TpPilhaM2 &pilha, int &i, bool &b, int disc) {

	if(de != 27 && para != 27) {

		while(de < 0 || de > 2) {

			gotoxy(4,25);
			printf("A origem deve ser entre 1 e 3: ");
			de = getch() - 49;
			PlaySound(TEXT("../musicas/Slap_Sound_Effect_Free-RKscLZhYMcg.wav"), NULL, SND_ASYNC);
		}
		while(para < 0 || para > 2 || de == para) {

			gotoxy(4,25);
			printf("Destino deve sem entre 1 e 3 e ser diferente da origem: ");
			para = getch() - 49;
			PlaySound(TEXT("../musicas/Slap_Sound_Effect_Free-RKscLZhYMcg.wav"), NULL, SND_ASYNC);
		}
		if(Vazia(pilha, de)) {

			gotoxy(4,25);
			printf("Torre vazia!!!");
			PlaySound(TEXT("../musicas/Slap_Sound_Effect_Free-RKscLZhYMcg.wav"), NULL, SND_ASYNC);
		}
		else if(!Vazia(pilha, para) && ElemTopo(pilha, de) > ElemTopo(pilha, para)) {

			gotoxy(4,25);
			PlaySound(TEXT("../musicas/Slap_Sound_Effect_Free-RKscLZhYMcg.wav"), NULL, SND_ASYNC);
			printf("Elemento da origem deve ser menor que o do destino: ");
		}
		else {

			PlaySound(TEXT("../musicas/Super_Mario_Odyssey_-_Moon_Sound_Effect-62hqVGeaEbQ.wav"), NULL, SND_ASYNC);
			Move(pilha, de, para, disc);
			Inserir(pilha, para, Retirar(pilha, de));		
			i++;
		}
	}
	else {

		clrscr();
		textcolor(MAGENTA);
		MenuInter();
		gotoxy(40,20);
		printf("Game Over!");
		gotoxy(38,22);
		system("pause");
		b = false;
	}
}

void jogar(TpPilhaM2 pilha) {
	
	bool b = true;
	int ini, ter, disc, i = 0, aux, j = 0, k, de, para;

	escolheTorre(ini, ter, disc);
	ini--;
	ter--;
	while(i == ini || i == ter)
		i++;
	aux = i;
	PlaySound(TEXT("../musicas/Super_Mario_Bros_Item_Block_Sound_Effect_Free_Ringtone_Download-EjYehpMJe_g.wav"), NULL, SND_ASYNC);
	Quadro();
	Base();
	Discos(pilha, ini, disc);
	while(pilha.cont[ter] < disc && b && de + 49 != 27) {

		gotoxy(4,21);
		printf("Da onde pra onde quer mover o disco");
		gotoxy(4,23);
		printf("** ESC para sair **");
		gotoxy(75,21);
		printf("Jogadas: ");
		printf("%d",j);
		gotoxy(40,21);
		de = getch() - 49;
		gotoxy(4,25);
		printf("                                                        ");
		if(de + 49 != 27) {

			para = getch() - 49;
			mover(para, de, pilha, j, b, disc);
		}
	}
	if(de + 49 == 27)
		lose();
	else
		win();
}

void mover2(TpPilhaM2 &pilha, int de, int para, int &i, int disc) {

    if(Vazia(pilha, de)) {

    	Move(pilha, para, de, disc);
    	Inserir(pilha, de, Retirar(pilha, para));
    }    
    else if(Vazia(pilha, para)) {

		Move(pilha, de, para, disc);
		Inserir(pilha, para, Retirar(pilha, de));
    } 	
    else if(ElemTopo(pilha, de) < ElemTopo(pilha, para)) {

		Move(pilha, de, para, disc);
		Inserir(pilha, para, Retirar(pilha, de));
	}  	
    else {

    	Move(pilha, para, de, disc);
    	Inserir(pilha, de, Retirar(pilha, para));
    }  
    i++;
    gotoxy(53,25);
	printf("Jogadas: ");
	printf("%d",i);
}

void simular(TpPilhaM2 pilha) {

	int ini, ter, disc, i = 0, k, aux2, j = 0;

	escolheTorre(ini, ter, disc);
	ini--;
	ter--;
	while(i == ini || i == ter)
		i++;

	int aux = i;
	
	Quadro();
	Base();
	Discos(pilha, ini, disc);
	PlaySound(TEXT("../musicas/Original_Tetris_theme_Tetris_Soundtrack-NmCCQxVBfyM.wav"), NULL, SND_ASYNC | SND_LOOP);
	while(pilha.cont[ter] < disc) {

		if(pilha.cont[ini] % 2 == 0) {

			mover2(pilha, ini, aux, j, disc);
			if(pilha.cont[ter] != disc) {

				mover2(pilha, ini, ter, j, disc);
				if(pilha.cont[ter] != disc)
					mover2(pilha, aux, ter, j, disc);
			}
		}
		else {

			mover2(pilha, ini, ter, j, disc);
			if(pilha.cont[ter] != disc) {

				mover2(pilha, ini, aux, j, disc);
				if(pilha.cont[ter] != disc)
					mover2(pilha, ter, aux, j, disc);
			}
		}
	}
	gotoxy(38,20);
	system("pause");
}

int main(int argc, char** argv)  {
	
	char opc;
	TpPilhaM2 pilha;
	Inicializar(pilha,3);
	system("cls");
	
	do {

		PlaySound(TEXT("../musicas/8bit_Menu_Music-OhJX8F2fe3U.wav"), NULL, SND_ASYNC | SND_LOOP);
		MenuInter();
		opc = menu();
		switch(opc) {

			case '1': 
				clrscr();
				jogar(pilha);
				break;
			case '2':
				clrscr();
				simular(pilha);
				break;
			default:
				if(opc != 27) {

					clrscr();
					MenuInter();
					textcolor(LIGHTRED);
					gotoxy(48,17);
					printf("** Operacao invalida **");
					textcolor(LIGHTGREEN);
					gotoxy(38,19);
					system("pause");
					clrscr();
				}	
		}
		system("cls");
	} while(opc != 27);
	
	return 0;
}
