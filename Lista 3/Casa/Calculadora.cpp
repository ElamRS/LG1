#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	char op;
	float a, b, result;
	
	do {
		system("cls");
		printf("-----------------\n");
		printf("   CALCULADORA   \n");
		printf("-----------------\n");
		
		printf(" +  Adição \n -  Subtração \n *  Multiplicação \n /  Divisão \n S  Sair \n\n");
		printf("Escolha: ");
		scanf("%c", &op);
		if (op == 'S') {
			break;
		} else if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {
			printf("A: ");
			scanf("%f", &a);
			printf("B: ");
			scanf("%f", &b);
		}
		
		switch (op) {
			case '+': result = a + b; break;
			case '-': result = a - b; break;
			case '*': result = a * b; break;
			case '/': result = a / b; break;
			case 'S': break; // Segurança
			default: printf("Opção Inválida. Tente novamente\n\n"); break;
		}
		if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {
			printf("Resultado: %.2f\n", result);
			result = 0;
			getch();
		}
	} while (1);
	
	printf("Calculadora Fechada.");
	getch();
	return 0;
}
