#include <stdio.h>
#include <conio.h>

int main() {
	int soma = 0;
	for (int i = 1; i <= 100; ++i) {
		soma += i;
	}
	printf("Soma: %i", soma);
	getch();
	return 0;
}
