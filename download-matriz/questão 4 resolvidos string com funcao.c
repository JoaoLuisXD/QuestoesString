#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int repet[256] = {0};
    char palavra[100];
    gets(palavra);
    fflush(stdin);
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        repet[(int)palavra[i]]++;
    }
    printf("letras que se repetem \n");
    for(int i=0;i<256;i++)
    {
        if(repet[i]>1 && i!=32)
        {
            printf("%c se repete %d vezes\n", i,repet[i]);
        }
    }
    return 0;
}
