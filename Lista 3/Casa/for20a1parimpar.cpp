#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	int i;
	for (i = 20; i > 0; --i) {
		if (i % 2 == 0) {
			printf("%d é par!\n", i);
		} else {
			printf("%d é impar!\n", i);
		}
	}
	getch();
	return 0;
}
