#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("%d é par!", num);
	} else {
		printf("%d é impar!", num);
	}
	getch();
	return 0;
}
