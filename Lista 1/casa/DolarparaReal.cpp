#include <stdio.h>
#include <conio.h>

int main()
{
	float real, dolar;
	printf("Dolar: $ ");
	scanf("%f", &dolar);
	real = dolar * 2.40;
	printf("Reais: R$ %.2f", real);
	getch();
	return 0;
}
