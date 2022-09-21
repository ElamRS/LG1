#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	const char *curso[] = {"Engenharia", "Edificações", "Sistemas Elétricos", 
	                       "Turismo", "Análise de Sistemas"};
	int num;
	printf("Escolha seu Curso: \n 1 - Engenharia \n 2 - Edificações \n 3 - Sistemas Elétricos \n 4 - Turismo \n 5 - Análise de Sistemas\n\n");
	printf("Número: ");
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
			printf("Número de curso Inválido!");
	}
	getch();
	return 0;
}
