#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, num = 0, r;
    float k;
    printf("enter\n");
    scanf("%d", &n);

    if (n < 0 || n > 999)
    {
        printf("Invalid");
        exit(0);
    }
    temp = n;
    while (temp)
    {
        r = temp % 10;
        num = num + (float)pow(r, 3); // power function internally use log to calculate power of no.
        temp /= 10;                   // so,it should be converted to float As, power function give value
                                      // near to actual power raised of number.
    }

    if (num == n)
    {
        printf("armstrong number");
    }
    else
        printf("not armstrong number");

    return 0;
}