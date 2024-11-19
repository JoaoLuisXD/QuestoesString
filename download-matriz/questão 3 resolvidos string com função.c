#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int funcao (char *palavra)
{
    int cont=0;
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]==' ')
        {
            cont++;
        }
    }
    return cont+1;
}
int main()
{
    char palavra[100],cont;
    gets(palavra);
    fflush(stdin);
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        printf("%c\n", palavra[i]);
    }
    int totcont=funcao(palavra);
    printf("quantidade de espacos em branco |%d|", totcont);
    return 0;
}

