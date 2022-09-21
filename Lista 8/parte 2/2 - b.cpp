#include <stdio.h>
#include <conio.h>
#include <iostream>

void lermatrizA(), lermatrizB(), juntar(), exibir();

int matrizA[30], matrizB[30], matrizC[60];

int main(void) {
	system("color 0F");
	lermatrizA();
	lermatrizB();
	juntar();
	exibir();
	getch();
	return (0);
}

void lermatrizA(void) {
	for (int i=0; i<30; ++i) {
		printf("Matriz A[%d]: ", i+1);
		scanf("%d", &matrizA[i]);
	}
	getch(); system("cls");
}

void lermatrizB(void) {
	for (int i=0; i<30; ++i) {
		printf("Matriz B[%d]: ", i+1);
		scanf("%d", &matrizB[i]);
	}
	getch(); system("cls");
}

void juntar(void) {
	for (int i=0; i<60; ++i) {
		if (i<30) {
			matrizC[i] = matrizA[i];
		} else {
			matrizC[i] = matrizB[i-30];
		}
	}
}

void exibir(void) {
	for (int i=0; i<60; ++i) {
		printf("Matriz C[i]: %d\n", i+1, matrizC[i]);
	}
	getch(); system("cls");
}
