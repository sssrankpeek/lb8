#include<stdio.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int z,j;
	char x, c, q;
	printf("¬ведите символ и его количество:");
		scanf("%c%d", &x,&z);
	for (int start = 1; start <= 1; start++)
	{
		putchar('+');
		putchar('!');
	}
	for(int start = 1; start <= z; start++)
	{
		printf("%c", x);
		putchar('!');
	}
	puts("");
	/*printf("¬ведите символы и их общее количество:");
	scanf("%c%c%d",&c,&q,&j);*/
	for (int start = 1; start <= 5; start++)
	{
		putchar('+');
		//printf("%c", &c);
	}
	for (int start = 6; start <= 10; start++)
	{
		putchar('-');
		//printf("%c", &q);
	}

	int n, m, s;
	scanf("\n%d%d", &n,&m);
	s = 0;
	for (int i = m; i >= n; i--)
	{
		s+=i;
		printf("\nвыполнено %d раз", i + 1);
	}
	printf("\nрезультат %d", s);

	float ARG, FUNC, tab;
	printf("y=2^x-2x^2-1\n");
	printf("введите шаг табул€ции функции:");
	scanf("%f", &tab);
	puts("__________");
	puts("| x |f(x) |");
	for (ARG = 2; ARG <= 4; ARG += tab)
	{
		FUNC = pow(2, ARG) - 2 * ARG * ARG - 1;
		printf("|%.1f|%.1f|\n", ARG, FUNC);
	}

	int N;
	double sum;
	printf("введите целое число:");
	scanf("%d", &N);
	sum = 1;
	for (float u = 2; u <= N; u++)
	{
		sum += (1. / u);
	}
	printf("\nREZULTAT:%lf", sum);
}
