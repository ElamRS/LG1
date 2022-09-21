#include <stdio.h>
#include <iostream>
#include <conio.h>

int main() {
	system("color 0A");
	int a = 1;
	int b = 0;
	int c;
	int cont = 1;
	printf("%d ", a);
	do {
		c = a + b;
		b = a;
		a = c;
		printf("%d ", c);
		cont++;
	} while (cont <= 15);
	getch();
	return 0;
}
