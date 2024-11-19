#include <stdio.h>
#include <stdlib.h>
int main()
{
    char palavra[100];
    int tam;
    gets(palavra);
    fflush(stdin);
    tam=strlen(palavra);
    printf("letras: |%d|\n", tam);
    for(int i=0;i<tam;i++)
    {
        printf("%c\n", palavra[i]);
    }
    int cont=0;
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]!='a'&&palavra[i]!='A'&&palavra[i]!='e'&&palavra[i]!='E'&&palavra[i]!='i'&&palavra[i]!='I'&&palavra[i]!='o'&&palavra[i]!='O'&&palavra[i]!='u'&&palavra[i]!='U')
        {
            cont++;
        }
    }
    printf("%quantidade de consoantes: %d", cont);

    return 0;
}
