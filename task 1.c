#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"RUS");
	int year, ostatok;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 !=0) || year % 400 ==0) printf("Год %d високостный\n", year);
	else printf("Год %d не високостный\n",year);
	system("pause");
}