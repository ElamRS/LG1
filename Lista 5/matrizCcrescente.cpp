#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int i, j, x, A[12], B[12], C[12];
	// ler Matriz A
	printf("Matriz A: \n");
	for (i=0; i<12; ++i) {
		printf("  %do Elemento: ", i+1);
		scanf("%d", &A[i]);
	} system("cls");
	// Ler Matriz B
	printf("Matriz B: \n");
	for (i=0; i<12; ++i) {
		printf("  %do Elemento: ", i+1);
		scanf("%d", &B[i]);
	} system("cls");
	// Ordenar Matrizes A e B
	for (i=0; i<=10; ++i) {
		for (j=i+1; j<=11; ++j) {
			if (A[i] > A[j]) { // Matriz A
				x = A[j];
				A[j] = A[i];
				A[i] = x;
			}
			if (B[i] > B[j]) { // Matriz B
				x = B[j];
				B[j] = B[i];
				B[i] = x;
			}
		}
	}
	// Inserir Valor na Matriz C
	for (i=0; i<12; ++i) {
		C[i] = A[i] + B[i];
	}
	// Ordenar Matriz C
	for (i=0; i<=10; ++i) {
		for (j=i+1; j<=11; ++j) {
			if (C[i] > C[j]) {
				x = C[j];
				C[j] = C[i];
				C[i] = x;
			}
		}
	}
	// Exibir Matriz C
	printf("Matriz C: ");
	for (i=0; i<12; ++i) {
		printf("%d ", C[i]);
	}
	getch();
	return 0;
}
