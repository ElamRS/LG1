#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int num;
	printf("Numero: ");
	scanf("%d", &num);
	printf("Numero ao Quadrado: %.2f", pow(num, 2));
	getch();
	return 0;
}
