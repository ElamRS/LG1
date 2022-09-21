#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B;
	printf("A:");
	scanf("%d", &A);
	printf("B:");
	scanf("%d", &B);
	A = B + A;
	B = A - B;
	A = A - B;
	printf("A: %d B: %d", A, B);
	getch();
	return 0;
}
