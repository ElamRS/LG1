#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float so, vo, a, t, s;
    so = 2;
    vo = 3;
    a = 10;
    printf("Segundos: ");
    scanf("%f", &t);
    s = so + vo * t + ((a * pow(t, 2)) / 2);
    printf("\n");
    printf("Valor de S: %.2f metros", s);
    getch();
    return 0;
}

