#include "tetris.h"


#define MAX_X 80
#define MAX_Y 24

void inicio_jogo() {
    char linha1[] = "████████ ███████ ████████ ██████  ██ ███████ ";
    char linha2[] = "   ██    ██         ██    ██   ██ ██ ██      ";
    char linha3[] = "   ██    █████      ██    ██████  ██ ███████ ";
    char linha4[] = "   ██    ██         ██    ██   ██ ██      ██ ";
    char linha5[] = "   ██    ███████    ██    ██   ██ ██ ███████ ";

    char texto1[] = "(C) UEFS FEIRA DE SANTANA, 2024.";
    char texto2[] = "Game by K. Borges & F. Portela & M. Mascarenhas";

    system("clear"); 
    fflush(stdout); 

    int y = (MAX_Y - 5) / 2;     
    int x = (MAX_X - 45) / 2 + 1; 

 
    printf("\033[%d;%dH%s", y + 1, x, linha1);
    fflush(stdout);
    printf("\033[%d;%dH%s", y + 2, x, linha2);
    fflush(stdout);
    printf("\033[%d;%dH%s", y + 3, x, linha3);
    fflush(stdout);
    printf("\033[%d;%dH%s", y + 4, x, linha4);
    fflush(stdout);
    printf("\033[%d;%dH%s\n", y + 5, x, linha5);
    fflush(stdout);

    printf("\033[%d;%dH%s\n", y + 7, x + 8, texto1);
    fflush(stdout);
    printf("\033[%d;%dH%s\n", y + 9, x , texto2);
    fflush(stdout);
 
}
