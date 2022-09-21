#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int soma = 0;
	for (int i = 2; i <= 500; i += 2) {
		soma += i;
	}
	printf("Soma dos pares até 500: %d", soma);
	getch();
	return 0;
}
