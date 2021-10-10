#include <stdio.h>
#include <math.h>

void task1();
void task2();
void task3();
void task4();
void task5();
int main()
{
	int number;
	while (1)
	{
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
		{
			system("cls");
			task1();
			printf("\n");
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			task2();
			printf("\n");
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			task3();
			printf("\n");
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			task4();
			printf("\n");
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			task5();
			printf("\n");
			system("pause");
			break;
		}
		case 6:
		{
			return 1;
		}
		}
	}
}
