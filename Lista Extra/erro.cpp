#include <iostream>
#include <conio.h>

int e;

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0F");
	int n, num, ano[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char cont='s';
	while (cont=='s') {
		printf("Digite o Mês: "); scanf("%d", &num); n=num-1;
		switch (num) {
			case 1: printf("O mês de janeiro tem %d dias.\n", ano[n]); break;
			case 2: printf("O mês de fevereiro tem %d ou %d dias.\n", ano[n], ano[n]+1); break;
			case 3: printf("O mês de março tem %d dias.\n", ano[n]); break;
			case 4: printf("O mês de abril tem %d dias.\n", ano[n]); break;
			case 5: printf("O mês de maio tem %d dias.\n", ano[n]); break;
			case 6: printf("O mês de junho tem %d dias.\n", ano[n]); break;
			case 7: printf("O mês de julho tem %d dias.\n", ano[n]); break;
			case 8: printf("O mês de agosto tem %d dias.\n", ano[n]); break;
			case 9: printf("O mês de setembro tem %d dias.\n", ano[n]); break;
			case 10: printf("O mês de outubro tem %d dias.\n", ano[n]); break;
			case 11: printf("O mês de novembro tem %d dias.\n", ano[n]); break;
			case 12: printf("O mês de dezembro tem %d dias.\n", ano[n]); break;
			default: printf("Mês Inválido.\n"); ++e; break;
		}
		printf("\nDeseja Pesquisar Novamento? [s] ");
		scanf(" %c", &cont);
		system("cls");
	}
	if (e>0) {printf("[%d] Erros Encontrados! (error type: mês inválido digitado.)\n", e);}
	getch();
	return 0;
}
