#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int task0(void);
int task1(void);
int task1A(void);
int task2(void);

int main(void) {
	setlocale(LC_CTYPE, "RUS");
	task0();
	task1();
	task1A();
	task2();
	return 0;
}

int task0(void) {
	int n;
	char k;
	printf("введите количество: ");
	scanf("%d", &n);
	printf("введите символ: ");
	scanf(" %c", &k);
	for (int start = 0; start < n; start++) printf("%c", k);
	puts("");
	return 0;
}

int task1(void) {
	int n, m;
	int s = 0;
	int k = 0;
	puts("Введите n и m через пробел");
	scanf("%d %d", &n, &m);
	for (int i = m; i >= n; i--) {
		s += i;
		k++;
	}
	printf("Выполнено %d раз\n", k);
	printf("Результат %d\n", s);
	return 0;
}

int task1A(void) {
	int n, m;
	double res = 0;
	puts("введите степень");
	scanf("%d", &n);
	puts("введите заданное число m");
	scanf("%d", &m);
	for (int i = 0; i <= n; i++) {
		if ((m < ((pow(2., (double)i))))) {
			res = pow(2., (double)i);
			break;
		}
		printf("2^%d = %.0lf\n", i, pow(2., (double)i));
	}
	printf("Результат: %.1lfK\n", res/1024.);
	return 0;
}

int task2(void) {
	double t;
	puts("y = 2^x - 2x^2 - 1");
	puts("введите шаг");
	scanf("%lf", &t);
	puts("-----------------");
	for (double i = 2.; i <= 4.; i += t) {
		printf("| %5.1lf | %5.1lf |\n", i, (pow(2., i) - (2 * pow(i, 2.)) - 1));
	}
	return 0;
}