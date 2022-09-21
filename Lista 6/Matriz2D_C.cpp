#include <stdio.h>
#include <iostream>
#include <conio.h>

int main() {
	int i, j, A[5][3], B[5][3], C[5][3];
	// Ler Matriz A;
	printf("Matriz A: \n");
	for (i=0; i<5; ++i) {
		for (j=0; j<3; ++j) {
			printf("Matriz A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	system("cls");
	// Ler Matriz B
	printf("Matriz B: \n");
	for (i=0; i<5; ++i) {
		for (j=0; j<3; ++j) {
			printf("Matriz B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	system("cls");
	// Criar Matriz C;
	for (i=0; i<5; ++i) {
		for (j=0; j<3; ++j) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	// Exibir Matriz C;
	printf("Matriz C: ");
	for (i=0; i<5; ++i) {
		printf("\n	");
		for (j=0; j<3; ++j) {
			printf("%d | ", C[i][j]);
		}
	}
	getch();
}
