#include <stdio.h>
#include <conio.h>
#include <iostream>
#define SIZE 5

int main() {
	int i, A[SIZE], B[SIZE];
	// Entrar valor de A
	for (i = 0; i < SIZE; ++i) {
		printf("Vetor A[%d]: ", i+1);
		scanf("%d", &A[i]);
		B[i] = A[i] * 3;
	}
	system("cls");
	// Exibir A
	printf("Vetor A: ");
	for (i = 0; i < SIZE; ++i) {
		printf("%d ", A[i]);
	}
	printf("\n");
	// Exibir B
	printf("Vetor B: ");
	for (i = 0; i < SIZE; ++i) {
		printf("%d ", B[i]);
	}
	getch();
}
