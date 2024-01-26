#include <stdio.h>
int main()
{
    int i = 0;

    printf("enter a positive number  ");
    scanf("%d", &i);

    while ( i < 0)
    {
        printf("enter a positive number  ");
        scanf("%d", &i);
    }

    printf("Thanks for providing a positve number\n");

    return 0;
}
