#include <stdio.h>
#include <conio.h>
#include <iostream>

int pesquisa(int termo); // Protótipo
// Variáveis
int termo, i, j, aux, A[20], B[20];
char decis;

int main() {
	system("color 0A");
	setlocale(LC_ALL, "portuguese");
	// Ler Matriz A
	printf("Matriz A: \n");
	for (i=0; i<20; ++i) {
		printf("%do Elemento: ", i+1);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Criar Matriz B
	for (i=0; i<20; ++i) {B[i] = A[i] + 2;}
	// Ordenar Matriz B
	for (i=0; i<=18; ++i) {
		for (j=i+1; j<=19; ++j) {
			if (B[i] > B[j]) {
				aux = B[j];
				B[j] = B[i];
				B[i] = aux;
			}
		}
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

// Rotina de Pesquisa
int pesquisa(int termo) {
	int count = 0;
	for (i=0; i<30; ++i) {
		if (termo == B[i]) {
			printf("Termo %d Encontrado na posição %d!\n", termo, i); count = 1;
		}
	}
	if (count == 0) {printf("Termo Não Encontrado!\n");}
}
