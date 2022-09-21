#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	int i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 20);
	getch();
	return 0;
}
