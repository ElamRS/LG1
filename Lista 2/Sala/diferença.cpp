#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int n1, n2, dif;
	printf("Número 1: ");
	scanf("%d", &n1);
	printf("Número 2: ");
	scanf("%d", &n2);
	if (n1 >= n2) {
		dif = n1 - n2;
	} else {
		dif = n2 - n1;
	}
	printf("Diferença entre maior e menor: %d", dif);
	getch();
	return 0;
}
