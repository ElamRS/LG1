#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	int numero;
	char escolha, continuar = 's';
	while (continuar=='s') {
		printf("----------------\n"
		       "   Banco IFSP   \n"
			   "----------------\n"
			   "1. dep�sito\n"
			   "2. saque\n"
			   "3. extrato\n"
			   "4. transfer�ncia\n"
			   "----------------\n"
			   "  E = encerrar\n"
			   "----------------\n"
			   "Sua escolha: ");
		scanf(" %c", &escolha);
		if (escolha=='E' || escolha=='e') {
			printf("\nEncerrando Opera��es...\n");
			break;
		} else {
			numero = escolha - '0';
		}
		switch (numero) {
			case 1: printf("\nOpera��o de Dep�sito\n"); break;
			case 2: printf("\nOpera��o de Saque\n"); break;
			case 3:	printf("\nOpera��o de Extrato\n"); break;
			case 4: printf("\nOpera��o de Transfer�ncia\n"); break;
			default: printf("\nPor favor, escolha as op��es abaixo."); break;
		}
		printf("\nDeseja Continuar? [s] "); scanf(" %c", &continuar);
		system("cls");
	}
	getch();
	return 0;
}
