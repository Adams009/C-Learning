#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void get_positive();

int main()
{
    get_positive();
    printf("Thanks for providing a positve number\n");

    return 0;
}

void get_positive(){
    int value = 0;

    while (value <= 0)
    {
        printf("Enter a positive number: ");
        scanf("%d", &value);
        if (value <= 0)
        {
            printf("That's not a positive number, try again\n");
        }
    }

    printf("You entered %d\n", value);
}