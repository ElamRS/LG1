#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3;
	printf("n�mero 1: ");
	scanf("%d", &n1);
	printf("n�mero 2: ");
	scanf("%d", &n2);
	printf("n�mero 3: ");
	scanf("%d", &n3);
	if ((n1 % 2 == 0) & (n1 % 3 == 0) || (n2 % 2 == 0) & (n2 % 3 == 0) || (n3 % 2 == 0) & (n3 % 3 == 0)) {
		if ((n1 % 2 == 0) & (n1 % 3 == 0)) {
			printf("%d ", n1);	
		}
		if ((n2 % 2 == 0) & (n2 % 3 == 0)) {
			printf("%d ", n2);	
		}
		if ((n3 % 2 == 0) & (n3 % 3 == 0)) {
			printf("%d ", n3);	
		}
	} else {
		printf("N�o existem n�meros divis�veis por 2 e 3.");
	}
	getch();
	return 0;
}
