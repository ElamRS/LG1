#include <stdio.h>
#include <conio.h>

int main() {
	int i = 1;
	do {
		if (i % 2 == 0) {
			printf("%d ", i);	
		}
		++i;
	} while (i <= 20);
	getch();
	return 0;
}
