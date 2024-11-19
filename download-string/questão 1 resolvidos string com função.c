#include <stdio.h>
#include <stdlib.h>
int cont_vog(char palavra[])
{
    int cont=0;
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]=='a'||palavra[i]=='A'||palavra[i]=='e'||palavra[i]=='E'||palavra[i]=='i'||palavra[i]=='I'||palavra[i]=='o'||palavra[i]=='O'||palavra[i]=='u'||palavra[i]=='U')
        {
            cont++;
        }
    }
    return cont;
}
int main()
{
    char palavra[100];
    printf("digite uma palavra: ");
    gets(palavra);
    fflush(stdin);
    int tam=strlen(palavra);
    printf("%tamanho da palavra: %d\n", tam);
    for(int i=0;i<tam;i++)
    {
        printf("%c\n", palavra[i]);
    }
    int total=cont_vog(palavra);
    printf("|%d|", total);


    return 0;
}

