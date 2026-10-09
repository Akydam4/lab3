#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_CTYPE, "RUS");
	int A;
	int B;
	printf("Введите значения A и B: ");
	scanf("%d%d", &A, &B);
	int perim = (A + B) * 2;
	int area = A * B;
	printf("Площадь = %d\nПериметр = %d\n", area, perim);
}