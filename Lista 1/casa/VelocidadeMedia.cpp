#include <stdio.h>
#include <conio.h>

int main()
{
	float d, t, v;
    printf("Espaco Percorrido (km): ");
    scanf("%f", &d);
    printf("Tempo Gasto (h): ");
    scanf("%f", &t);
    v =  d / t;
    printf("\n");
    printf("Velocidade Media: %.2f Km/H", v);
    getch();
    return 0;
}
