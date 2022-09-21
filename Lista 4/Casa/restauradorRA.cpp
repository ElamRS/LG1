#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int ra, i;
	int rav[9], rac[9];
	printf("Restaurador de RA\n");
	// Entrar com o RAV
	for (i = 0; i < 9; ++i) {
		printf("RAV: %do ", i+1);
		fflush(stdin);
		scanf("%d", &rav[i]);
	}
	// Limpar a tela
	system("cls");
	// Corrigir com a cifra
	for (i = 0; i < 9; ++i) {
		switch (i) {
			case 0:
				rac[i] = rav[0]; break;
			case 1:
				rac[i] = rav[1]; break;
			case 2:
				rac[i] = rav[7]; break;
			case 3:
				rac[i] = rav[6]; break;
			case 4:
				rac[i] = rav[4]; break;
			case 5:
				rac[i] = rav[5]; break;
			case 6:
				rac[i] = rav[2]; break;
			case 7:
				rac[i] = rav[3]; break;
			case 8:
				rac[i] = rav[8]; break;
			default:
				break;
		}
	}
	// Escrever RAC
	printf("RA Correto: ");
	for (i = 0; i < 9; ++i) {
		printf("%d", rac[i]);
	}
	getch();
}
