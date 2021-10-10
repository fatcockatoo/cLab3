#include <stdio.h>
#include <math.h>

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
void main()
{
    int n, k;
    scanf_s("%d", &n);
    scanf_s("%d", &k);
    print(n, k);
}