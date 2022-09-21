#include <stdio.h>
#include <conio.h>

int main()
{
	float real, dolar;
	printf("Reais: R$ ");
	scanf("%f", &real);
	dolar = real / 2.40;
	printf("Dolar: $ %.2f", dolar);
	getch();
	return 0;
}
