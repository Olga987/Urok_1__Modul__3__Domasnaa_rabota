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

	printf("������� ����� �������: ");
	scanf("%d", &n);
	if (n == 1)
	{
#pragma region 1.	�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s) � ���������� ���������� ������, ��������� � ������ ���.
		int h = 0, m = 0, s = 0, result = 0;

		printf("������� ���-�� ��������� �����,�����,������ \n");
		scanf("%d %d %d", &h, &m, &s);

		if ((h < 24 && m <= 59 && s <= 60) || (h <= 24 && m == 0 && s == 0)) {
			result = (h * 3600) + (m * 60) + s;
			printf("� ������ ��� ������ %d ������\n", result);
		}
		else
			printf("������ ������� �� �����\n");

#pragma endregion
	}
	else if (n == 2)
	{
#pragma region 2.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ����.
		int m = 0, d = 0, result = 0;

		printf("������� ���-�� �������: ");
		scanf("%d", &m);

		printf("������� ���-�� ����: ");
		scanf("%d", &d);

		if (m <= 12 && d <= 30) {
			result = ((m - 1) * 30) + d;
			printf("%d ���� ������ � ������ ����\n", result);
		}
		else
			printf("������� ������� ������\n ");
#pragma endregion
	}
	else if (n == 3)
	{
#pragma region 3.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.

		int m = 0, d = 0, result = 0;

		printf("������� ���������� ����� ������: ");
		scanf("%d", &m);

		printf("������� ����: ");
		scanf("%d", &d);

		if (m == 1 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", d);
		else if (m == 2 && d <= 28)
			printf("� ������ ���� ������ %d ����\n", 31 + d);
		else if (m == 3 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 59 + d);
		else if (m == 4 && d <= 30)
			printf("� ������ ���� ������ %d ����\n", 90 + d);
		else if (m == 5 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 120 + d);
		else if (m == 6 && d <= 30)
			printf("� ������ ���� ������ %d ����\n", 151 + d);
		else if (m == 7 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 181 + d);
		else if (m == 8 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 212 + d);
		else if (m == 9 && d <= 30)
			printf("� ������ ���� ������ %d ����\n", 243 + d);
		else if (m == 10 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 273 + d);
		else if (m == 11 && d <= 30)
			printf("� ������ ���� ������ %d ����\n", 304 + d);
		else if (m == 12 && d <= 31)
			printf("� ������ ���� ������ %d ����\n", 334 + d);
		else
			printf("�������� ������� �� �����\n");
#pragma endregion
	}
	else if (n == 4)
	{
#pragma region 4.	�������� ������� f(int& m1, int& m0, int N), ������� ���������� ������ � ��������� ����� ����������� ������������ ����� N.
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
#pragma region 5.	�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������ ���� ����� �����. ����������� �������� �������� if

		int m1 = 0, m2 = 0, m3 = 0;

		m1 = 1 + rand() % 99;
		m2 = 1 + rand() % 99;
		m3 = 1 + rand() % 99;
		printf("%d - %d - %d\n", m1, m2, m3);

		if (m1 < m2&&m1 < m3)
			printf("������� %d\n", m1);
		else if (m2 < m1&&m2 < m3)
			printf("������� %d\n", m2);
		else if (m3 < m1&&m3 < m2)
			printf("������� %d\n", m3);
#pragma endregion
	}
	else if (n == 6)
	{
#pragma region 6.	�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������

		int m = 0, n = 0;

		m = 1 + rand() % 2000;
		n = 1 + rand() % 2000;

		printf("%d - %d\n", m, n);

		if (n%m == 0)
			printf("������\n");
		else if (n%m != 0)
			printf("�� ������\n");
#pragma endregion
	}
	goto start;
}