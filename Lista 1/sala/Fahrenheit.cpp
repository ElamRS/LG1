#include <stdio.h>
#include <conio.h>

int main()
{
	float F, C;
	printf("Temperatura em Fahrenheit: ");
	scanf("%f", &F);
	C = (((F-32) * 5) / 9);
	printf("Temperatura: %.2f", C);
	getch();
	return 0;
}
