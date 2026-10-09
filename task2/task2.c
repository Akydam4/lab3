#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D_e 2.54
#define D_s 2.32166

main()
{
	setlocale(LC_CTYPE, "");
	int dym;
	float result_e;
	float result_s;
	printf("¬ведите значение дл€ рассчЄта: ");
	scanf("%d", &dym);
	result_e = dym * D_e;
	result_s = dym * D_s;
	printf("%d английских дюймов - это %.2f см\nиспанских дюймов - это %.2f см",dym, result_e, result_s);
}