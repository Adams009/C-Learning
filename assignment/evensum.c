#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            i +=i;
        }
    }

        printf("sum of even numbers from 1 to 50 = %d\n", i);

    return 0;
}
