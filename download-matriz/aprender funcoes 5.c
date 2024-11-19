#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto1[50];
    char texto2[50];
    gets(texto1);
    gets(texto2);
    int cont;
    cont=strcmp(texto1,texto2);
    if(cont==0)
    {
        printf("iguais");
    }
    else
    {
        printf("diferentes");
    }

    return 0;
}
