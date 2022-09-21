#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	if (num < 0) {
		num = num * -1;
	}
	printf("Módulo: %d", num);
	getch();
	return 0;
}
