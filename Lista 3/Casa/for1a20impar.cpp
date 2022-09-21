#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	int i;
	system("color 0A");
	for (i = 1; i <= 20; i += 2) {
		printf("%d ", i);
	}
	getch();
	return 0;
}
