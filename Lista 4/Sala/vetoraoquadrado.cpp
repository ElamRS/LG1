#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#define size 8

int main() {
	int i, j, A[size], B[size];
	// Ler matriz A
	for (i = 0; i < size; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Preencher matriz B
	for (i = 0; i < size; ++i) {
		B[i] = pow(A[i], 2);
	}
	// Exibir B
	printf("Vetor B: ");
	for (i = 0; i < size; ++i) {
		printf("%d; ", B[i]);
	}
	getch();
}
