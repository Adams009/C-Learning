#include <stdio.h>
int recursion(int b);

int main(void)
{
    int a;
    printf("enter a number  ");
    scanf("%i", &a);
    printf("%i\n", recursion(a));
}

int recursion(int b)
{
    int sum = 0;
    if (b != 0)
        return sum += recursion((int)(b % 10));
}