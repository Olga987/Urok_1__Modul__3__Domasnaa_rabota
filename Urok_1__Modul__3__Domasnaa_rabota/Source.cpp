#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	int n = 0;
start:

	printf("Введите номер задания: ");
	scanf("%d", &n);
	if (n == 1)
	{
#pragma region 1.	Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента (часы h, минуты m и секунды s) и возвращает количество секунд, прошедших с начала дня.
		int h = 0, m = 0, s = 0, result = 0;

		printf("Введите кол-во прошедших часов,минут,секунд \n");
		scanf("%d %d %d", &h, &m, &s);

		if ((h < 24 && m <= 59 && s <= 60) || (h <= 24 && m == 0 && s == 0)) {
			result = (h * 3600) + (m * 60) + s;
			printf("С начала дня прошло %d секунд\n", result);
		}
		else
			printf("Данные введены не верно\n");

#pragma endregion
	}
	else if (n == 2)
	{
#pragma region 2.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней.
		int m = 0, d = 0, result = 0;

		printf("Введите кол-во месяцев: ");
		scanf("%d", &m);

		printf("Введите кол-во дней: ");
		scanf("%d", &d);

		if (m <= 12 && d <= 30) {
			result = ((m - 1) * 30) + d;
			printf("%d дней прошло с начала года\n", result);
		}
		else
			printf("Неверно введены данные\n ");
#pragma endregion
	}
	else if (n == 3)
	{
#pragma region 3.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней, а год не високосный.

		int m = 0, d = 0, result = 0;

		printf("Введите порядковый номер месяца: ");
		scanf("%d", &m);

		printf("Введите дату: ");
		scanf("%d", &d);

		if (m == 1 && d <= 31)
			printf("С начала года прошло %d дней\n", d);
		else if (m == 2 && d <= 28)
			printf("С начала года прошло %d дней\n", 31 + d);
		else if (m == 3 && d <= 31)
			printf("С начала года прошло %d дней\n", 59 + d);
		else if (m == 4 && d <= 30)
			printf("С начала года прошло %d дней\n", 90 + d);
		else if (m == 5 && d <= 31)
			printf("С начала года прошло %d дней\n", 120 + d);
		else if (m == 6 && d <= 30)
			printf("С начала года прошло %d дней\n", 151 + d);
		else if (m == 7 && d <= 31)
			printf("С начала года прошло %d дней\n", 181 + d);
		else if (m == 8 && d <= 31)
			printf("С начала года прошло %d дней\n", 212 + d);
		else if (m == 9 && d <= 30)
			printf("С начала года прошло %d дней\n", 243 + d);
		else if (m == 10 && d <= 31)
			printf("С начала года прошло %d дней\n", 273 + d);
		else if (m == 11 && d <= 30)
			printf("С начала года прошло %d дней\n", 304 + d);
		else if (m == 12 && d <= 31)
			printf("С начала года прошло %d дней\n", 334 + d);
		else
			printf("Значения введены не верно\n");
#pragma endregion
	}
	else if (n == 4)
	{
#pragma region 4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую и последнюю цифры двузначного натурального числа N.
		int m0 = 0, m1 = 0, N = 0;

		N = 1 + rand() % 99;
		printf("%d\n", N);

		m0 = N / 10;
		m1 = N % 10;
		printf("m0 = %d\nm1 = %d\n", m0, m1);
#pragma endregion
	}
	else if (n == 5)
	{
#pragma region 5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел. Используйте условный оператор if

		int m1 = 0, m2 = 0, m3 = 0;

		m1 = 1 + rand() % 99;
		m2 = 1 + rand() % 99;
		m3 = 1 + rand() % 99;
		printf("%d - %d - %d\n", m1, m2, m3);

		if (m1 < m2&&m1 < m3)
			printf("Меньшее %d\n", m1);
		else if (m2 < m1&&m2 < m3)
			printf("Меньшее %d\n", m2);
		else if (m3 < m1&&m3 < m2)
			printf("Меньшее %d\n", m3);
#pragma endregion
	}
	else if (n == 6)
	{
#pragma region 6.	Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому

		int m = 0, n = 0;

		m = 1 + rand() % 2000;
		n = 1 + rand() % 2000;

		printf("%d - %d\n", m, n);

		if (n%m == 0)
			printf("Кратно\n");
		else if (n%m != 0)
			printf("Не кратно\n");
#pragma endregion
	}
	goto start;
}