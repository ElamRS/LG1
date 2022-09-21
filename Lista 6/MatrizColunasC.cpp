#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	int i, j, A[4], B[4], C[4][2];
	// Ler Matriz A
	for (i=0; i<4; ++i) {
		printf("Matriz A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Ler Matriz B
	for (i=0; i<4; ++i) {
		printf("Matriz B[%d]: ", i);
		scanf("%d", &B[i]);
	}
	system("cls");
	// Criar Matriz C
	for (i=0; i<4; ++i) {
		for (j=0; j<2; ++j) {
			if (j==0) {
				C[i][j] = A[i]*2;
			} else {
				C[i][j] = B[i]-5;
			}
		}
	}
	// Exibir Matriz C
	printf("Matriz C: ");
	for (i=0; i<4; ++i) {
		printf("\n	");
		for (j=0; j<2; ++j) {
			printf("%d | ", C[i][j]);
		}
	}
	getch();
}
