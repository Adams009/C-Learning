#include "main.h"

int main()
{
    /**
    int mylist[5];

    for (int i = 0; i < 5; i++)
    {
        mylist[i] = i*i;
    }

    printf("Legth in Bytes - %lu\n", sizeof(mylist));
    printf("Legth in Bytes - %lu\n", sizeof(int));

    for (int i = 0; i < sizeof(mylist) / sizeof(int); i++)
    {
        printf("%d\n", mylist[i]);
    }
    */

    print(10);
    int mynumber, mynumber2;
    mynumber = 10;
    mynumber2 = 20;
    print(add(mynumber, mynumber2));
}
