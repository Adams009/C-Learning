#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a;

    if (argc != 2)
    {
        printf("low argument provided\n");
        return (1);
    }

    fp = fopen(argv[1], "r");

    if (fp ==  NULL)
    {
        printf("unable to open file\n");
        return (1);
    }


    while ((a = fgetc(fp)) != EOF)
    {
        putchar(a);
    }

    fclose(fp);

    printf("\n");
    return (0);
}