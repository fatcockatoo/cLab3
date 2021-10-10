#include <stdio.h>
#include <math.h>

double summ1(int n)
{
	double summ = 0;
	int i = 0;
	while (i <= n)
	{
		summ += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
		i++;
	} return summ;
}
void task1()
{
	int n;
	scanf_s("%d", &n);
	double sum = summ(n);
	printf("%lf\n", sum);
}
double summ2(double eps)
{
	int i = 0;
	double summ = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
	while (abs(summ) > eps)
	{
		i++;
		summ += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
	} return summ;
}
void task2()
{
	double eps;
	scanf_s("%lf", &eps);
	double sum = summ(eps);
	printf("%lf\n", sum);
}
void print(int n, int k)
{
	double count = 0;
	int i = 0;
	while (i < n)
	{
		count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
		if ((i + 1) % k == 0)
		{
			i++;
			continue;
		}
		else
		{
			printf("%lf\n", count);
		}
		i++;
	}

}
void task3()
{
	int n, k;
	scanf_s("%d", &n);
	scanf_s("%d", &k);
	print(n, k);
}
int findFirstElement(double eps)
{
	double count = 0;
	int i = 0;
	while (1)
	{
		count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
		i++;
		if (abs(count) < eps)
		{
			break;
		}
	}
	return i;
}
void task4()
{
	double eps;
	scanf_s("%lf\n", &eps);
	int ffe = findFirstElement(eps);
	printf("%d\n", ffe);
}
int findFirstNegativeElement(double eps)
{

	double count = 0;
	int i = 0;
	while (true)
	{
		count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	}
}
void task5()
{
	double eps;
	scanf_s("%lf\n", &eps);
	int ffne = findFirstNegativeElement(eps);
	printf("%d\n", ffne);
}