#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<locale.h>

void main() {

	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n = 0;

start:
	printf("n (1-6) = ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: {
		printf("1.	Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента (часы h, минуты m и секунды s) и возвращает количество секунд, прошедших с начала дня.\n");
		int h, m, s, result;

		printf("часов = ");
		scanf("%d", &h);

		printf("минут = ");
		scanf("%d", &m);

		printf("sec = ");
		scanf("%d", &s);

		result = h * 3600 + m * 360 + s;

		printf("koli4estvo sek s nachala dnya = %d\n", result);
	}
			break;
	case 2: {
		printf("2.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней.\n");

		int m = 1 + rand() % 12, d = 1 + rand() % 12;

		printf("mes = %d\tdays = %d\n\n", m, d);

		printf("result = %d\n", m * 30 + d);
	}
	case 3: {
		printf("3.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней, а год не високосный.\n\n");

		int m, d, result, days;
		printf("mesyacev = ");
		scanf("%d", &m);

		printf("days = ");
		scanf("%d", &d);

		for (size_t i = 1; i <= m; i++)
		{
			printf("\nkoli4estvo dnei v %d mesyace = ", i);
			scanf("%d", &days);
			result = m*days;
		}
		printf("days = %d\n", result + d);
	}
			break;
	case 4: {
		printf("4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую и последнюю цифры двузначного натурального числа N.\n");

		int m1, m0, N;

	start2:
		printf("vvedite 2yx zna4noe 4islo = ");
		scanf("%d", &N);

		if (N > 9 && N < 100) {
			m1 = N / 10;
			m0 = N % 10;

			printf("m1 = %d\tm0 = %d\n\n", m1, m0);
		} goto start2;
	}
			break;
	case 5: {
		printf("5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел. Используйте условный оператор if\n\n");

		int m1 = 1 + rand(), m2 = 1 + rand(), m3 = 1 + rand();

		printf("m1 = %d\tm2 = %d\tm3 = %d\n\n", m1, m2, m3);
	
		if (m1 < m2 && m1 < m3) printf("m1 = %d\n", m1); else if (m2 < m1 && m2 < m3) printf("m2 = %d\n", m2); else if (m3 < m2 && m3 < m1) printf("m = %d\n", m3);
	}
			break;
	case 6: {
		printf("6.	Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому\n\n");

		int m = 1 + rand() % 10, n = 1 + rand() % 10;

		printf("4islo 1 = %d\t4islo 2 = %d\n\n",m,n);

		(n%m == 0)? printf("true\n") :printf("false\n");
	}
	default:
		goto start;
		break;
	}
	goto start;
}