#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

int pesquisa(float num);
float x, num, A[8], B[8];
int i, j;
char dec;	

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	// Entrar com a matriz A
	for (i = 0; i < 8; ++i) {
		printf("Digite o %do número: ", i+1);
		scanf("%f", &A[i]); 
		system("cls");
	}
	// Criar matriz B
	for (i = 0; i < 8; ++i) {
		B[i] = (A[i]*5);
	}
	// Ordenar matriz B
	for (i = 0; i <= 6; ++i) {
		for (j = i+1; j < 8; ++j) {
			if (B[i] > B[j]) {
				x = B[i];
				B[i] = B[j];
				B[j] = x;
			}
		}
	}
	// Exibir matriz B
	printf("Matriz B: ");
	for (i = 0; i < 8; ++i) {
		if (i == 7) {
			printf("%.2f\n\n", B[i]);
		} else {
			printf("%.2f - ", B[i]);	
		}
		
	}
	// Pesquisar um número na matriz B
	while (1) {
		printf("Qual número pesquisar? ");
		scanf("%f", &num);
		pesquisa(num);
		system("cls");
		printf("Deseja Continuar[s]? ");
		scanf("%s", &dec);
		if (dec != 's') {
			break;
		}
	}
	printf("Programa Encerrado!");
	getch();
}

int pesquisa(float num) {
	int pos, existe = 0;
	for (i = 0; i < 8; ++i) {
		if (B[i] == num) {
			pos = i;
			existe = 1;
			printf("%.2f está na posição %d\n", num, pos);
			getch();
		}
	}
	if (existe == 0) {
			printf("número não encontrado!");
			getch();
	}
}
