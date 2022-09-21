#include <stdio.h>
#include <conio.h>
#include <iostream>
#define size 5

int main() {
	system("color 0A");
	int i, A[size], B[size], C[size];
	// Ler vetor A
	for (i = 0; i < size; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	printf("\n");
	// Ler vetor B
	for (i = 0; i < size; ++i) {
		printf("B[%d]: ", i+1);
		scanf("%d", &B[i]);
	}
	getch();
	system("cls");
	// Preencher vetor C
	for (i = 0; i < size; ++i) {
		C[i] = A[i] - B[i];
	}
	// Exibir vetor C
	printf("Vetor C: ");
	for (i = 0; i < size; ++i) {
		printf("%d; ", C[i]);
	}
	getch();
}
