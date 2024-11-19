#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome1[50];
    char nome2[50];
    gets(nome1);
    gets(nome2);
    printf("antes\n");
    printf("str1: %s\n",nome1);
    printf("str2: %s\n",nome2);

    strcat(nome1,nome2);
    printf("depois\n");
    puts(nome1);
    return 0;
}
