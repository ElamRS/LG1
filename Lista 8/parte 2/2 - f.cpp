#include <stdio.h>

void fibonnaci(int N) {
	int i=1, x=1, y=0, z;
	while (i<=N) {
		if (i==1) {
			printf("%d", x);	
		} else {
			printf(" - %d", x);
		}
		z=x;
		x+=y;
		y=z;
		i++; 
	}
}

int main(void) {
	int N;
	printf("Tamanho da sequencia: ");
	fflush(stdin); scanf("%d", &N);
	fibonnaci(N);
	return 0;
}
