#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
	int num = 3;
	for (int i = 0; i <= 15; i++) {
		int quad = pow(num, i);
		printf("%d elevado a %d = %d\n", num, i, quad);
	}
	getch();
	return 0;
}
