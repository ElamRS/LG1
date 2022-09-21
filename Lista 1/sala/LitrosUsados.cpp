#include <stdio.h>
#include <conio.h>

int main()
{
	float t, v, d, lu;
	printf("Digite o Tempo: ");
	scanf("%f", &t);
	printf("Digite a Velocidade Media: ");
	scanf("%f", &v);
	d = t * v;
	lu = d / 12;
	printf("Velocidade Media: %f\n", v);
	printf("Tempo Gasto: %f\n", t);
	printf("Distância Percorrida: %f\n", d);
	printf("Litros Usados: %f\n", lu);
	getch();
	return 0;
}
