#include <stdio.h>
#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int A, B;
	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);
	if (A > B) {
		printf("A � maior!", A);
	} else if (B > A) {
		printf("B � maior!", B);
	} else {
		printf("A e B s�o iguais", A, B);
	}
	getch();
	return 0;
}
