#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int a, b, con;

    printf("СИСТЕМА ПРОВЕРКИ ПОБЕДЫ\n");
    printf("Введите 2 числа:\n");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("Ошибка ввода\n");
        return 1;
    }

   
    con = (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0);

    printf("Победа (1 - да, 0 - нет): %d\n", con);
    return 0;
}
