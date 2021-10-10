#include <stdio.h>
#include <math.h>

int findFirstNegativeElement(double eps)
{

    double count = 0;
    int i = 0;
    do
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        i++;
        if (abs(count) < eps && count < 0)
        {
            return i;
        }
    } while (1);
}
void main()
{
    double eps;
    scanf_s("%lf", &eps);
    int ffne = findFirstNegativeElement(eps);
    printf("%d\n", ffne);
}