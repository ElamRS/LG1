#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
	for (int i = 15; i <= 200; i++) {
		int quad = pow(i, 2);
		printf("%d ", quad);
	}
	getch();
}
