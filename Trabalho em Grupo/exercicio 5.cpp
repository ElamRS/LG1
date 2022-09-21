#include<stdio.h>
#include<conio.h>

int main()
{
	float j[3], A, B, C, maior=0, menor=1000, meio=0;
	int i, X;
	printf("digite um valor para A");
	scanf("%f", &A);
	printf("digite um valor para B");
	scanf("%f", &B);
	printf("digite um valor para C");
	scanf("%f", &C);
	printf("digite um valor para X");
	scanf("%i", &X);
	// Maior
	if (A>=maior) {
		maior = A;
		if (B>=maior){
			maior = B;
		}
		if (C>=maior) {
			maior = C;
		}
	} 
	// Menor
	if (A<menor) {
		menor = A;
		if (B<menor) {
			menor = B;
		}
		if (C<menor) {
			menor = C;
		}
	}
	// Meio
	if (A<maior && A>menor) {
		meio = A;
	}
	if (B<maior && B>menor) {
		meio = B;	
	}
	if (C<maior && C>menor) {
		meio = C;
	}
	
	if(X=1){
		printf("\n ordem crescente eh %f %f %f", menor, meio, maior);
	}
	if(X=2){
		printf("\n ordem decrescente eh %f", A,B,C);
	}
	if(X=3){
		printf("\n numero maior no meio eh %f", A,B,C);
	}
	getch();
	return 0;
}
