#include <stdio.h>
#include <math.h>

int findFirstElement(double eps)
{
    double count = 0;
    double i;
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
void main()
{
    double eps;
    scanf_s("%lf\n", &eps);
    int ffe = findFirstElement(eps);
    printf("%d\n", ffe);
}