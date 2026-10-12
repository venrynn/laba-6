#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
// x=7 f(x) = 12
// x=8 f(x) = 0.01666
int f_1(int x)
{
	return 3 * x - 9;
}
float f_2(int x)
{
	return 1.0/(pow(x,2) - 4);
}
main()
{
	int x;
	scanf("%d", &x);
	printf("%.4f\n", (x <= 7) ? f_1(x) : f_2(x));
	system("pause");
}
