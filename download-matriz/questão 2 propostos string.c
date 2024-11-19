#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funcao(char *palavra)
{
    char *separa;
    separa=strtok(palavra," ");
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        printf("%s\n",palavra);
        palavra = strtok(NULL, " ");
    }
}
int main()
{
    char palavra[100];
    gets(palavra);
    funcao(palavra);
    return 0;
}
