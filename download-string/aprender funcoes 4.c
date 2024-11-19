#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];
    int i;
    gets(nome);
    i=strlen(nome);
    printf("tamanho da string: %d\n", i);
    for(i=0;i<strlen(nome);i++)
    {
        printf("%c\n", nome[i]);
    }

    return 0;
}
