#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int i = 1;
	while (i <= 20) {
		if (i % 2 == 0) {
			printf("%d é par!\n", i);
		} else {
			printf("%d é impar!\n", i);
		}
		++i;
	}
	getch();
	return 0;
}
