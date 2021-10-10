#include <stdio.h>
#include <math.h>

int findFirstElement(double eps)
{

    double count = 0;
    double i = 0;
    do
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        i++;
        if (abs(count) < eps)
        {
            break;
        }
    } while (1);
    return i;
}
void main()
{
    double eps;
    scanf_s("%lf", &eps);
    int ffe = findFirstElement(eps);
    printf("%d\n", ffe);
}