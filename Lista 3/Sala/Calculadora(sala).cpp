#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 79");
	int num;
	int i = 1;
	printf("Tabuada do Número: ");
	scanf("%i", &num);
	do {
		printf("%i X %i = %i\n", num, i, num*i);
		i++;
	} while (i <= 10);
	getch();
}
