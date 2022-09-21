#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3;
	printf("número 1: ");
	scanf("%d", &n1);
	printf("número 2: ");
	scanf("%d", &n2);
	printf("número 3: ");
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
		printf("Não existem números divisíveis por 2 e 3.");
	}
	getch();
	return 0;
}
