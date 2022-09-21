#include <stdio.h>
#include <conio.h>

int main()
{
	int nr_coelhos;
	float custo;
	printf("Numero de Coelhos: ");
	scanf("%d", &nr_coelhos);
	custo = (nr_coelhos * 0.70) / 18 + 10;
	printf("Custo de criar %d coelhos: R$ %.2f", nr_coelhos, custo);
	getch();
	return 0;
}
