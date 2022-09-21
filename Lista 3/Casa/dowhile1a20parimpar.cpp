#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0C");
	int i = 1;
	do {
		if (i % 2 == 0) {
			printf("%d é par!\n", i);
		} else {
			printf("%d é impar!\n", i);
		}
		++i;
	} while (i <= 20);
	getch();
	return 0;
}
