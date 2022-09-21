#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int i, x, ra[9];
	// Input
    printf("Digite o RA: \n");
	for (i = 0; i < 9; ++i) {
		printf("%do. posição: ", i+1);
		scanf("%d", &ra[i]);
	}
	system("cls");
	// Inverter
	for (i = 0; i < 9; ++i) {
		if (i == 0) {
			x = ra[i+1];
			ra[i+1] = ra[i];
			ra[i] = x;
		}
		if (i == 7) {
			x = ra[i+1];
			ra[i+1] = ra[i];
			ra[i] = x;
		}
	}
	// Escrever na tela
	printf("Novo RA: ");
	for (i = 0; i < 9; ++i) {
		printf("%d", ra[i]);
	}
	getch();
}
