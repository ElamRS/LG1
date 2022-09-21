#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, C;
	printf("A:");
	scanf("%d", &A);
	printf("B:");
	scanf("%d", &B);
	C = A;
	A = B;
	B = C;
	printf("A: %d B: %d", A, B);
	getch();
	return 0;
}
