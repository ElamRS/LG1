#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int num, i;
	printf("Digite o número da tabuada: ");
	scanf("%d", &num);
	for (i = 0; i <= 10; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
	getch();
	return 0;
}
