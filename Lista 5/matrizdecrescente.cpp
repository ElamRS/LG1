#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	int i, j, x, array[12];
	// Get the array
	for (i = 0; i < 12; ++i) {
		printf("Digite o %do. número: ", i+1);
		scanf("%d", &array[i]); system("cls");
	}
	// Bubble Sort the array
	for (i = 0; i < 12; ++i) {
		for (j = i+1; j <= 12; ++j) {
			if (array[j] > array[i]) {
				x = array[i];
				array[i] = array[j];
				array[j] = x;
			}
		}
	}
	// Print the array
	printf("Array: ");
	for (i = 0; i < 12; ++i) {
		printf("%d; ", array[i]);
	}
	getch();
}
