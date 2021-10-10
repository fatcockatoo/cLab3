#include <stdio.h>
#include <math.h>

double summ(int n)
{
    double summ1 = 0;
    for (int i = 0; i <= n; i++)
    {
        summ1 += (pow(-1, i) * (i + 1)) / ((pow(2, i)) + (pow(3, i)));
    }
    return summ1;
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
    double summ3 = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
    for (int i = 1; abs(summ3) > eps; i++)
    {
        summ3 += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        i++;

    }  return summ3;
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

    for (int i = 0; i < n; i++)
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        if ((i + 1) % k == 0)
        {
            continue;
        }
        else
        {
            printf("%lf\n", count);
        }
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
    int i;
    for (i = 0; ; i++)
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        if (abs(count) < eps)
        {
            break;
        }
    }
    return i + 1;
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
    int i;
    for (i = 0; ; i++)
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        if (abs(count) < eps && count < 0)
        {
            return i + 1;
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