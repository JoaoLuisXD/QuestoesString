#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[100];
    gets(palavra);
    fflush(stdin);
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        printf("%c\n", palavra[i]);
    }
    int cont=0;
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]==' ')
        {
            cont++;
        }
    }
    printf("foram encontrados |%d| espacos em branco", cont+1);

    return 0;
}
