#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("%d � par!", num);
	} else {
		printf("%d � impar!", num);
	}
	getch();
	return 0;
}
