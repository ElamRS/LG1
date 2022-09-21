#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 70");
	int i;
	for (i = 20; i > 0; i--) {
		printf("%d ", i);
	}
	getch();
	return 0;
}
