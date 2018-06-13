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
	printf("введите номер задания: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.
		int a = 0, b = 0;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;

		if (a == b)
		{
			printf("a и b равны: %d\n", a);
		}
		else
		{
			if (a<b)
				printf("числа не равны. а = %d, b =  %d\n", a, b);
			else
				printf("числа не равны. b = %d, a =  %d\n", b, a);
		}
	}
	break;


	case 2:
	{
		//2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену.
		//Студент получает допуск, если его средний балл 4 балла и выше

		float x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
	top1:
		printf("введите первую оценку: ");
		scanf("%f", &x1);

		if (x1<0 || x1>5)
		{
			printf("такой оценки не существует, введите еще раз\n");
			goto top1;
		}

	top2:
		printf("введите вторую оценку: ");
		scanf("%f", &x2);

		if (x2<0 || x2>5)
		{
			printf("такой оценки не существует, введите еще раз\n");
			goto top2;
		}

	top3:
		printf("введите третью оценку: ");
		scanf("%f", &x3);

		if (x3<0 || x3>5)
		{
			printf("такой оценки не существует, введите еще раз\n");
			goto top3;
		}

	top4:
		printf("введите четвертую оценку: ");
		scanf("%f", &x4);

		if (x4<0 || x4>5)
		{
			printf("такой оценки не существует, введите еще раз\n");
			goto top4;
		}

	top5:
		printf("введите пятую оценку: ");
		scanf("%f", &x5);

		if (x5<0 || x5>5)
		{
			printf("такой оценки не существует, введите еще раз\n");
			goto top5;
		}


		float res = 0;
		res = (x1 + x2 + x3 + x4 + x5) / (float)5;

		if (res >= 4)
			printf("студент допущен к экзамену\n");
		else
			printf("студент не допущен к экзамену\n");
	}
	break;

	case 3:
	{
		//3.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену.
		//Студент получает допуск, если его средний балл 4 балла и выше
		float x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
		x1 = 1 + rand() % 5;
		x2 = 1 + rand() % 5;
		x3 = 1 + rand() % 5;
		x4 = 1 + rand() % 5;
		x5 = 1 + rand() % 5;

		float res = 0;
		res = (x1 + x2 + x3 + x4 + x5) / (float)5;

		if (res >= 4)
			printf("студент допущен к экзамену, его средний балл: %f\n", res);
		else
			printf("студент не допущен к экзамену, его средний балл: %f\n", res);
	}
	break;

	case 4:
	{
		//4.	Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие.
		//Вывести на экран результат
		cin.get();
		char act;
		int a = 0, b = 0;
		printf("введите два числа и арифметическое действие (напр, 5*4): ");
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
		//5.	Написать программу, которая по выбору пользователя меняет цвет консольного приложения.
		//Пользователь может выбрать цвет шрифта и цвет фона
		cin.get();
		char colorShrift;
	
		printf("введите цвет шрифта (W - белый, Y - желтый, R - красный, G - зеленый): ");
		scanf("%c", &colorShrift);

		switch (colorShrift)
		{
		case 'W':
		{
			SetConsoleTextAttribute(hConsole, 7);
			printf("цвет шрифта изменен на белый\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("введите цвет фона (W - белый, Y - желтый, R - красный, G - зеленый): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("цвет фона изменен на белый\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("цвет фона изменен на желтый\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("цвет фона изменен на красный\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("цвет фона изменен на зеленый\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'Y':
		{
			SetConsoleTextAttribute(hConsole, 6);
			printf("цвет шрифта изменен на желтый\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("введите цвет фона (W - белый, Y - желтый, R - красный, G - зеленый): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("цвет фона изменен на белый\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("цвет фона изменен на желтый\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("цвет фона изменен на красный\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("цвет фона изменен на зеленый\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'R':
		{
			SetConsoleTextAttribute(hConsole, 4);
			printf("цвет шрифта изменен на красный\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("введите цвет фона (W - белый, Y - желтый, R - красный, G - зеленый): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("цвет фона изменен на белый\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("цвет фона изменен на желтый\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("цвет фона изменен на красный\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("цвет фона изменен на зеленый\n");
			}
			break;

			SetConsoleTextAttribute(hConsole, 15);
			}
		}
		break;

		case 'G':
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("цвет шрифта изменен на зеленый\n");

			cin.get();
			char colorTheme;

			SetConsoleTextAttribute(hConsole, 15);
			printf("введите цвет фона (W - белый, Y - желтый, R - красный, G - зеленый): ");
			scanf("%c", &colorTheme);

			switch (colorTheme)
			{
			case 'W':
			{
				SetConsoleTextAttribute(hConsole, 7);
				printf("цвет фона изменен на белый\n");

			}
			break;
			case 'Y':
			{
				SetConsoleTextAttribute(hConsole, 6);
				printf("цвет фона изменен на желтый\n");
			}
			break;
			case 'R':
			{
				SetConsoleTextAttribute(hConsole, 4);
				printf("цвет фона изменен на красный\n");
			}
			break;
			case 'G':
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("цвет фона изменен на зеленый\n");
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
		//6.	Написать программу, которая по выбору пользователя возводит введенное им число в степень
		//от нулевой до седьмой включительно
		float num = 0;
		printf("введите число: ");
		scanf("%f", &num);

		printf("Степени числа %.0f от 0 до 7: \n"
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
		//7.	В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту,
		//в которые тут же набились пассажиры. Водители обнаружили, что количество людей в разных маршрутках разное,
		//и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было поровну пассажиров.
		//Требуется по количествам людей в трех маршрутках определить, какое наименьшее количество пассажиров
		//придаться при этом пересадить (если это вообще возможно)

		int a = 0, b = 0, c = 0;
		printf("введите число людей в маршрутке А: ");
		scanf("%d", &a);

		printf("введите число людей в маршрутке B: ");
		scanf("%d", &b);

		printf("введите число людей в маршрутке C: ");
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
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", b1);
				else
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", c1);
			}
			else if (a1 != 0 && b1 == 0 && c1 != 0)
			{
				if (a1 <= c1)
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", a1);
				else
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", c1);
			}
			else if (a1 != 0 && b1 != 0 && c1 == 0)
			{
				if (a1 <= b1)
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", a1);
				else
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", b1);
			}
			else if (a1 != 0 && b1 != 0 && c1 != 0)
			{
				if (a1 <= b1 && a1 <= c1)
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", a1);
				else if (b1 <= a1 && b1 <= c1)
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", b1);
				else if (c1 <= a1 && c1 <= b1)
					printf("Наименьшее количество пассажиров, которое придется пересадить = %d\n", c1);
			}
			else
			{
				printf("Никого пересаживать не надо. Во всех маршрутках поровну человек\n");
			}

		}
		else
		{
			printf("Общее число людей не делится поровну на 3 маршрутки. Пересадка невозможна!\n");
		}

	}
	break;

	}
}
