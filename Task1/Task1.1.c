#include <stdio.h>
#include <math.h>

double summ(int n)
{
    double summ = 0;
    for (double i = 0; i <= n; i++)
    {
        summ += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
    }
    return summ;
}

void main()
{
    int n;
    scanf_s("%d", &n);
    double sum = summ(n);
    printf("%lf\n", sum);
}