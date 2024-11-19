#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int funcao(char *palavra)
{
    int cont=0;
    int tam = strlen(palavra);
    char *separa = strtok(palavra," ");
    for(int i=0;i<tam;i++)
    {
        palavra = strtok(NULL," ");
        if(strcmp(palavra[i], "AULA") == 0)
        {
           cont++;
        }
    }

    return cont;
}
int main()
{
    char palavra[100];
    gets(palavra);
    fflush(stdin);
    printf("%d\n",funcao(palavra));


    return 0;
}
