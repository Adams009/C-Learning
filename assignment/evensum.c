#include <stdio.h>
int main()
{
    int i, sum;
    sum = 0;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            sum +=i;
        }
    }

        printf("sum of even numbers from 1 to 50 = %d\n", sum);

    return 0;
}
