#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	printf("n�mero 1: ");
	scanf("%d", &n1);
	printf("n�mero 2: ");
	scanf("%d", &n2);
	if ((n1 % 4 == 0) || (n1 % 5 == 0) || (n2 % 4 == 0) || (n2 % 5 == 0)) {
		if ((n1 % 4 == 0) || (n1 % 5 == 0)) {
			printf("%d ", n1);	
		}
		if ((n2 % 4 == 0) || (n2 % 5 == 0)) {
			printf("%d ", n2);	
		}
	} else {
		printf("N�o existem n�meros divis�veis por 4 e 5.");
	}
	getch();
	return 0;
}
