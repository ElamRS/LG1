#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	float A, B, C;
	printf("Digite o primeiro numero: "); 
	scanf("%f", &A);
	printf("Digite o segundo numero: "); 
	scanf("%f", &B);
	printf("Digite o terceiro numero: "); 
	scanf("%f", &C);
	
	if ((A<B) && (A<C) && (B<C)) {
		printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", A, B, C);
	} else {
		if ((A<B) && (A<C) && (C<B)) {
			printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", A, C, B);
		} else {
	 		if ((B<A) && (B<C) && (A<C)) {
				printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", B, A, C);
			} else {
				if ((B<A) && (B<C) && (C<A)) {
					printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", B, C, A);
				} else {
					if ((C<A) && (C<B) && (A<B)) {
						printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", C, A, B);
					} else {
						printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", C, B, A);
					} 
				}
			} 
		}	
	}
	getch();
	return 0;
}
