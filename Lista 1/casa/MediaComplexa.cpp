#include <stdio.h>
#include <conio.h>

int main()
{
	float p1, p2, ativ, media;
	printf("Primeira Avaliacao: ");
    scanf("%f", &p1);
    printf("Segunda Avaliacao: ");
    scanf("%f", &p2);
    printf("Atividades: ");
    scanf("%f", &ativ);
    media = (p1 * 4 + p2 * 4 + ativ * 2) / 10;
    printf("\n");
    printf("Media Semestral: %.2f", media);
    getch();
    return 0;
}

