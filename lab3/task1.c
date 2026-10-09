#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_CTYPE, "");
	int num;
	puts("Введите число: ");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	int a;
	printf("Введите второе число: ");
	scanf("%d", &a);
	int summ = a + num;
	int razn = a - num;
	int proizv = a * num;
	int chastnoe = a / num;
	int ostatok = a % num;
	printf("Сумма = %d\n Разность = %d\n Произведение равно = %d\n Частное равно = %d\n Остаток от деления равен = %d", summ, razn, proizv, chastnoe, ostatok);
}