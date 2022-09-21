#include <stdio.h>
#include <conio.h>

int main() {
	for (int cont = 1; cont < 200; ++cont) {
		if (cont % 4 == 0) {
			printf("%d ", cont);
		}
	}
	getch();
}
