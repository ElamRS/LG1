#include <stdio.h>
int potencia(int base, int expoente);

int main(void) {
	int base, expoente;
	printf("Base: "); fflush(stdin); scanf("%d", &base);
	printf("Expoente: "); fflush(stdin); scanf("%d", &expoente);
	printf("%d ^ %d: %d", base, expoente, potencia(base, expoente));
	return 0;
}

int potencia(int base, int expoente) {
	int valor=base, i=1;
	while (i<=expoente) {
		if (i==1) {
			base*=1;
		} else {
			base*=valor;	
		}
		++i;
	}
	return base;
}
