#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int i, x, ra[9];
	// Receber RA
	printf("RA Inicial: \n");
	for (i = 0; i < 9; ++i) {
		printf("%do. posição: ", i+1);
		scanf("%d", &ra[i]);	
	}
	system("cls");
	// Inverter RA
	for (i = 0; i < 9; ++i) {
		switch (i) {
			case 5:
				x = ra[i]; ra[i] = ra[8]; ra[8] = x; break;
			case 6:
				x = ra[i]; ra[i] = ra[7]; ra[7] = x; break;
			default:
				break;
		}
	}
	// Exibir Novo RA
	printf("Novo RA: ");
	for (i = 0; i < 9; ++i) {
		printf("%d", ra[i]);
	}
	getch();
}
