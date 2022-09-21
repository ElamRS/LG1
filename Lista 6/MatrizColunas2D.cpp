#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	int i, j, A[7], B[7], C[7][2];
	// Ler Matriz A
	printf("Matriz A: \n");
	for (i=0; i<7; ++i) {
		printf(" Matriz A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Ler Matriz B
	printf("Matriz B: \n");
	for (i=0; i<7; ++i) {
		printf(" Matriz B[%d]: ", i);
		scanf("%d", &B[i]);
	}
	system("cls");
	// Criar Matriz;
	for (i=0; i<7; ++i) {
		for (j=0; j<2; ++j) {
			if (j==0) {
				C[i][j] = A[i];	
			} else {
				C[i][j] = B[i];
			}
		}
	}
	// Mostrar Matriz;
	printf("Matriz C: ");
	for (i=0; i<7; ++i) {
		printf("\n	");
		for (j=0; j<2; ++j) {
			printf("%d | ", C[i][j]);
		}
	}
	getch();
}
