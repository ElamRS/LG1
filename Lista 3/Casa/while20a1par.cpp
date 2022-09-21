#include <stdio.h>
#include <iostream>
#include <conio.h>

int main() {
	int i = 20;
	system("color 1D");
	while(i > 0) {
		printf("%d ", i);
		i -= 2;
	}
	getch();
	return 0;
}
