#include <stdio.h>
#include <stdlib.h>
int cont_cons (char palavra[])
{
    int cont=0;
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]!='a'&&palavra[i]!='A'&&palavra[i]!='e'&&palavra[i]!='E'&&palavra[i]!='i'&&palavra[i]!='I'&&palavra[i]!='o'&&palavra[i]!='O'&&palavra[i]!='u'&&palavra[i]!='U')
        {
            cont++;
        }
    }
    return cont;
}
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
    int total=cont_cons(palavra);
    printf("|%d|",total);

    return 0;
}
