#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	const char *curso[] = {"Engenharia", "Edifica��es", "Sistemas El�tricos", 
	                       "Turismo", "An�lise de Sistemas"};
	int num;
	printf("Escolha seu Curso: \n 1 - Engenharia \n 2 - Edifica��es \n 3 - Sistemas El�tricos \n 4 - Turismo \n 5 - An�lise de Sistemas\n\n");
	printf("N�mero: ");
	scanf("%d", &num);
	printf("\n");
	switch (num) {
		case 1:
			printf("%s foi escolhido!", curso[num-1]); break;
		case 2:
			printf("%s foi escolhido!", curso[num-1]); break;
		case 3:
			printf("%s foi escolhido!", curso[num-1]); break;
		case 4:
			printf("%s foi escolhido!", curso[num-1]); break;
		case 5:
			printf("%s foi escolhido!", curso[num-1]); break;
		default:
			printf("N�mero de curso Inv�lido!");
	}
	getch();
	return 0;
}
