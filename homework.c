#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	scanf("%d", &N);
	printf("%s", (N % 10 == 5 || N / 100 == 5 || (N % 100)/10 == 5) ? "цифра 5 входит" : "цифра 5 не входит");
}