#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
    double count = 0;

    for (int i = 0; i < n; i++)
    {
        count = pow(-1, i) * (i + 1) / ((pow(2, i)) + (pow(3, i)));
        if (((i + 1) % k) == 0)
        {
            continue;
        }
        else
        {
            printf("%lf\n", count);
        }
    }

}
void main()
{
    int n,k;
    scanf_s("%d",&n);
    scanf_s("%d",&k);
    print(n, k);
}