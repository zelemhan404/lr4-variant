#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b, con;
	printf("СИСТЕМА ПРОВЕРКИ ПОБЕДЫ\n");
	printf("введите 2 числа:");
	scanf("%d %d", &a, &b);
	con = (a % 2 == 0 && b % 2 == 0);
	con = (a % 2 != 0 && b % 2 != 0);
	con = (a % 2 == 0 && b % 2 != 0);
	con = (a % 2 != 0 && b % 2 == 0);
	printf("победа (1 - да, 2 - нет): %d\n", con);
	return 0;

}