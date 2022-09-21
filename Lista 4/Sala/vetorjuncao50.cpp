#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

int main() {
	int i, A[20], B[30], C[50];
	// Ler vetor A
	for (i = 0; i < 20; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
		// A[i] = rand() % 100; caso queira executar rapidamente
	}
	printf("\n");
	// Ler vetor B
	for (i = 0; i < 30; ++i) {
		printf("B[%d]: ", i+1);
		scanf("%d", &B[i]);
		// B[i] = rand() % 100; caso queira executar rapidamente
	}
	getch();
	system("cls");
	// Vetor C
	for (i = 0; i < 50; ++i) {
		if (i < 20) {
			C[i] = A[i];
		} else {
			C[i] = B[i-20];
		}
	}
	// Exibir vetor C
	printf("Vetor C: ");
	for (i = 0; i < 50; ++i) {
		printf("%d; ", C[i]);
	}
	getch();
	return 0;
}
