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
			   "1. depósito\n"
			   "2. saque\n"
			   "3. extrato\n"
			   "4. transferência\n"
			   "----------------\n"
			   "  E = encerrar\n"
			   "----------------\n"
			   "Sua escolha: ");
		scanf(" %c", &escolha);
		if (escolha=='E' || escolha=='e') {
			printf("\nEncerrando Operações...\n");
			break;
		} else {
			numero = escolha - '0';
		}
		switch (numero) {
			case 1: printf("\nOperação de Depósito\n"); break;
			case 2: printf("\nOperação de Saque\n"); break;
			case 3:	printf("\nOperação de Extrato\n"); break;
			case 4: printf("\nOperação de Transferência\n"); break;
			default: printf("\nPor favor, escolha as opções abaixo."); break;
		}
		printf("\nDeseja Continuar? [s] "); scanf(" %c", &continuar);
		system("cls");
	}
	getch();
	return 0;
}
