#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
		
	float A, B, C;
	printf("Digite o primeiro numero: "); 
	scanf("%f", &A);
	printf("Digite o segundo numero: "); 
	scanf("%f", &B);
	printf("Digite o terceiro numero: "); 
	scanf("%f", &C);
	if ((A<B) && (A<C) && (B<C)) {
		printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", A, B, C);
	} else {
		if ((A<B) && (A<C) && (C<B)) {
			printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", A, C, B);
		} else {
	 		if ((B<A) && (B<C) && (A<C)) {
				printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", B, A, C);
			} else {
				if ((B<A) && (B<C) && (C<A)) {
					printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", B, C, A);
				} else {
					if ((C<A) && (C<B) && (A<B)) {
						printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", C, A, B);
					} else {
						printf("O valor maior, o valor do meio e o valor menor são respectivamente: %.2f, %.2f, %.2f", C, B, A);
					} 
				}
			} 
		}	
	}
	getch();
	return 0;
}
