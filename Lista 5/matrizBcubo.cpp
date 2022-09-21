#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

int pesquisa(int termo); // Protótipo

// Variáveis
int termo, i, A[30], B[30];
char decis; 

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	// Ler Matriz A
	printf("Matriz A: \n");
	for (i=0; i<30; ++i) {
		printf("  %do Elemento: ", i+1);
		scanf("%d", &A[i]);
	} system("cls");
	// Criar Matriz B
	for (i=0; i<30; ++i) {
		B[i] = pow(A[i], 3);
	}
	// Menu de Pesquisa
	while(1) {
		printf("Matriz B: ");
		for (i=0; i<20; ++i) {
			printf("%d ", B[i]);
		}
		printf("\n\n");
		printf("Pesquisar um Termo em B? [s]: ");
		scanf("%s", &decis);
		if (decis != 's') {
			break;
		}
		printf("termo a ser pesquisado: ");
		scanf("%d", &termo);
		pesquisa(termo);
		getch();
		system("cls");
	}
	getch();
}

int pesquisa(int termo) {
	int count = 0;
	for (i=0; i<30; ++i) {
		if (termo == B[i]) {
			printf("Termo %d Encontrado na posição %d!\n", termo, i); count = 1;
		}
	}
	if (count == 0) {printf("Termo Não Encontrado!\n");}
}
