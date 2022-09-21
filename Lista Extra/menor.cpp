// <DESAFIO> Implementado sem Arrays
#include <stdio.h>
#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int A, B, C, i, men, c=0;
	char menor;
	printf("A: "); scanf("%d", &A);
	printf("B: "); scanf("%d", &B);
	printf("C: "); scanf("%d", &C);
	if (A < 0 || B < 0 || C < 0) {printf("\nValores Negativos!"); getch(); return 0;}
	if (A == B && B == C) {printf("\nA, B e C são iguais, valendo %d.", A); getch(); return 0;}
	for (i=0; i < 3; ++i) {
		switch (i) {
			case 0: men = A; menor = 'A'; break;
			case 1:if (B<men) {men = B; menor = 'B';} break;
			case 2: if (C<men) {men = C; menor = 'C';} break;
			default:break;
		}
	}
	if (A == men && B == men) {printf("A e B são iguais e menor."); c=1;}
	if (B == men && C == men) {printf("B e C são iguais e menor."); c=1;}
	if (A == men && C == men) {printf("A e C são iguais e menor."); c=1;}
	if (c==0) {printf("\n%c é menor!", menor);}
	getch();
	return 0;
}
