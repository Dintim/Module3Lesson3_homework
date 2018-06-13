#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <Windows.h>
#include <math.h>


using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.
		int a = 0, b = 0;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;

		if (a == b)
		{
			printf("a � b �����: %d\n", a);
		}
		else
		{
			if (a<b)
				printf("����� �� �����. � = %d, b =  %d\n", a, b);
			else
				printf("����� �� �����. b = %d, a =  %d\n", b, a);
		}
	}
	break;


	case 2:
	{
		//2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������.
		//������� �������� ������, ���� ��� ������� ���� 4 ����� � ����

		float x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
	top1:
		printf("������� ������ ������: ");
		scanf("%f", &x1);

		if (x1<0 || x1>5)
		{
			printf("����� ������ �� ����������, ������� ��� ���\n");
			goto top1;
		}

	top2:
		printf("������� ������ ������: ");
		scanf("%f", &x2);

		if (x2<0 || x2>5)
		{
			printf("����� ������ �� ����������, ������� ��� ���\n");
			goto top2;
		}

	top3:
		printf("������� ������ ������: ");
		scanf("%f", &x3);

		if (x3<0 || x3>5)
		{
			printf("����� ������ �� ����������, ������� ��� ���\n");
			goto top3;
		}

	top4:
		printf("������� ��������� ������: ");
		scanf("%f", &x4);

		if (x4<0 || x4>5)
		{
			printf("����� ������ �� ����������, ������� ��� ���\n");
			goto top4;
		}

	top5:
		printf("������� ����� ������: ");
		scanf("%f", &x5);

		if (x5<0 || x5>5)
		{
			printf("����� ������ �� ����������, ������� ��� ���\n");
			goto top5;
		}


		float res = 0;
		res = (x1 + x2 + x3 + x4 + x5) / (float)5;

		if (res >= 4)
			printf("������� ������� � ��������\n");
		else
			printf("������� �� ������� � ��������\n");
	}
	break;

	case 3:
	{
		//3.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������.
		//������� �������� ������, ���� ��� ������� ���� 4 ����� � ����
		float x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
		x1 = 1 + rand() % 5;
		x2 = 1 + rand() % 5;
		x3 = 1 + rand() % 5;
		x4 = 1 + rand() % 5;
		x5 = 1 + rand() % 5;

		float res = 0;
		res = (x1 + x2 + x3 + x4 + x5) / (float)5;

		if (res >= 4)
			printf("������� ������� � ��������, ��� ������� ����: %f\n", res);
		else
			printf("������� �� ������� � ��������, ��� ������� ����: %f\n", res);
	}
	break;

	case 4:
	{
		//4.	�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������.
		//������� �� ����� ���������
		cin.get();
		char act;
		int a = 0, b = 0;
		printf("������� ��� ����� � �������������� �������� (����, 5*4): ");
		scanf("%d%c%d", &a, &act, &b);

		switch (act)
		{
		case '+':
		{
			printf("%d%c%d = %d\n", a, act, b, a + b);
		}
		break;
		case '-':
		{
			printf("%d%c%d = %d\n", a, act, b, a - b);
		}
		break;
		case '*':
		{
			printf("%d%c%d = %d\n", a, act, b, a*b);
		}
		break;
		case '/':
		{
			printf("%d%c%d = %d\n", a, act, b, a / b);
		}
		break;
		case '%':
		{
			printf("%d%c%d = %d\n", a, act, b, a%b);
		}
		break;
		}
	}
	break;

	case 5:
	{
		//5.	�������� ���������, ������� �� ������ ������������ ������ ���� ����������� ����������.
		//������������ ����� ������� ���� ������ � ���� ����
		cin.get();
		char colorShrift;
	
		printf("������� ���� ������ (W - �����, Y - ������, R - �������, G - �������): ");
		scanf("%c", &colorShrift);

		switch (colorShrift)
		{
		case 'W':
		{
			SetConsoleTextAttribute(hConsole, 7);
			printf("���� ������ ������� �� �����\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("������� ���� ���� (W - �����, Y - ������, R - �������, G - �������): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("���� ���� ������� �� �����\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("���� ���� ������� �� ������\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("���� ���� ������� �� �������\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("���� ���� ������� �� �������\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'Y':
		{
			SetConsoleTextAttribute(hConsole, 6);
			printf("���� ������ ������� �� ������\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("������� ���� ���� (W - �����, Y - ������, R - �������, G - �������): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("���� ���� ������� �� �����\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("���� ���� ������� �� ������\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("���� ���� ������� �� �������\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("���� ���� ������� �� �������\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'R':
		{
			SetConsoleTextAttribute(hConsole, 4);
			printf("���� ������ ������� �� �������\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("������� ���� ���� (W - �����, Y - ������, R - �������, G - �������): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("���� ���� ������� �� �����\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("���� ���� ������� �� ������\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("���� ���� ������� �� �������\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("���� ���� ������� �� �������\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'G':
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("���� ������ ������� �� �������\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("������� ���� ���� (W - �����, Y - ������, R - �������, G - �������): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("���� ���� ������� �� �����\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("���� ���� ������� �� ������\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("���� ���� ������� �� �������\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("���� ���� ������� �� �������\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		
		}
		SetConsoleTextAttribute(hConsole, 15);
	}
	break;

	case 6:
	{
		//6.	�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � �������
		//�� ������� �� ������� ������������
		float num = 0;
		printf("������� �����: ");
		scanf("%f", &num);

		printf("������� ����� %.0f �� 0 �� 7: \n"
			"---------------------------------\n"
			"%.0f ^ 0 = %.0f\n"
			"%.0f ^ 1 = %.0f\n"
			"%.0f ^ 2 = %.0f\n"
			"%.0f ^ 3 = %.0f\n"
			"%.0f ^ 4 = %.0f\n"
			"%.0f ^ 5 = %.0f\n"
			"%.0f ^ 6 = %.0f\n"
			"%.0f ^ 7 = %.0f\n", num, num, pow(num, 0),
			num, pow(num, 1), num, pow(num, 2),
			num, pow(num, 3), num, pow(num, 4),
			num, pow(num, 5), num, pow(num, 6),
			num, pow(num, 7)
		);
	}
	break;

	case 7:
	{
		//7.	� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, ��������� �� ������ ��������,
		//� ������� ��� �� �������� ���������. �������� ����������, ��� ���������� ����� � ������ ���������� ������,
		//� ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� ������� ����������.
		//��������� �� ����������� ����� � ���� ���������� ����������, ����� ���������� ���������� ����������
		//��������� ��� ���� ���������� (���� ��� ������ ��������)

		int a = 0, b = 0, c = 0;
		printf("������� ����� ����� � ��������� �: ");
		scanf("%d", &a);

		printf("������� ����� ����� � ��������� B: ");
		scanf("%d", &b);

		printf("������� ����� ����� � ��������� C: ");
		scanf("%d", &c);

		int total = 0;
		total = a + b + c;

		if (total % 3 == 0)
		{
			int a1 = 0, b1 = 0, c1 = 0;
			a1 = abs(a - (total / 3));
			b1 = abs(b - (total / 3));
			c1 = abs(c - (total / 3));


			if (a1 == 0 && b1 != 0 && c1 != 0)
			{
				if (b1 <= c1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", b1);
				else
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", c1);
			}
			else if (a1 != 0 && b1 == 0 && c1 != 0)
			{
				if (a1 <= c1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", a1);
				else
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", c1);
			}
			else if (a1 != 0 && b1 != 0 && c1 == 0)
			{
				if (a1 <= b1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", a1);
				else
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", b1);
			}
			else if (a1 != 0 && b1 != 0 && c1 != 0)
			{
				if (a1 <= b1 && a1 <= c1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", a1);
				else if (b1 <= a1 && b1 <= c1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", b1);
				else if (c1 <= a1 && c1 <= b1)
					printf("���������� ���������� ����������, ������� �������� ���������� = %d\n", c1);
			}
			else
			{
				printf("������ ������������ �� ����. �� ���� ���������� ������� �������\n");
			}

		}
		else
		{
			printf("����� ����� ����� �� ������� ������� �� 3 ���������. ��������� ����������!\n");
		}

	}
	break;

	}
}
