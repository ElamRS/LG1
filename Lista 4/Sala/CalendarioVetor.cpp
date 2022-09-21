#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    const char *mes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
	              "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	int num;
    printf("Número do Mês: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("Mês: %s", mes[num-1]); break;
        case 2:
            printf("Mês: %s", mes[num-1]); break;
        case 3:
            printf("Mês: %s", mes[num-1]); break;
        case 4:
            printf("Mês: %s", mes[num-1]); break;
        case 5:
            printf("Mês: %s", mes[num-1]); break;
        case 6:
            printf("Mês: %s", mes[num-1]); break;
        case 7:
            printf("Mês: %s", mes[num-1]); break;
        case 8:
            printf("Mês: %s", mes[num-1]); break;
        case 9:
            printf("Mês: %s", mes[num-1]); break;
        case 10:
            printf("Mês: %s", mes[num-1]); break;
        case 11:
            printf("Mês: %s", mes[num-1]); break;
        case 12:
            printf("Mês: %s", mes[num-1]); break;
        default:
            printf("Digite um número entre 1 e 12!"); break;
    }
    getch();
    return 0;
}
