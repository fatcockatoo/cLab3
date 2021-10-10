#include <stdio.h>
#include <math.h>

double summ(double eps)
{
    int i = 0;
    double summ = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
    while (abs(summ) > eps)
    {
        i++;
        summ += pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
    } return summ;
}
void main()
{
    double eps;
    scanf_s("%lf", &eps);
    double sum = summ(eps);
    printf("%lf\n", sum);
}