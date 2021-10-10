#include <stdio.h>
#include <math.h>

double summ(double eps)
{
    int i = 0;
    double summ = 0;
    do
    {
        summ += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        i++;
    } while (abs(summ) > eps);
    return summ;
}
void main()
{
    double eps;
    scanf_s("%lf", &eps);
    printf("%lf\n", summ(eps));
}