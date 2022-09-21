#include <stdio.h>
#include <conio.h>

int main()
{
	float prest, valor, taxa, tempo;
	printf("Valor: R$ ");
    scanf("%f", &valor);
    printf("Taxa: ");
    scanf("%f", &taxa);
    printf("Tempo (mes): ");
    scanf("%f", &tempo);
    prest = valor + (valor * (taxa / 100) * tempo);
    printf("Prestacao: R$ %.2f", prest);
	getch();
	return 0;
}
