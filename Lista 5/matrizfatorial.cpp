#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	long long x, i, j, fat = 1, A[15], B[15];
	// Entrar com Matriz A
	for (i = 0; i < 15; ++i) {
		printf("número na %do. posição: ", i+1);
		scanf("%d", &A[i]);
		system("cls");
	}
	// Criar Matriz B
	for (i = 0; i < 15; ++i) {
		for (j = 1; j <= A[i]; ++j) {
			fat = j * fat;
		}
		B[i] = fat;
		fat = 1;
	}
	// Ordenar Matriz B
	for (i = 0; i <= 13; ++i) {
		for (j = i+1; j <= 14; ++j) {
			if (B[i] > B[j]) {
				x = B[j];
				B[j] = B[i];
				B[i] = x;
			}
		}
	}
	// Exibir Matriz B
	printf("Matriz B: ");
	for (i = 0; i < 15; ++i) {
		printf("%d ", B[i]);
	}
	getch();
}
