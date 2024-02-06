#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a;

    if (argc < 3)
    {
        printf("low argument provided\n");
        return (1);
    }

    fp = fopen(argv[1], "w");
    
    if (fp == NULL)
    {
        printf("eroor writing file\n");
        return (1);
    }

    for (int i = 2; i < argc; i++)
    {
        fprintf(fp, "%s ", argv[i]);
    }

    fclose(fp);

    return (0);
}