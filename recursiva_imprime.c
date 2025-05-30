#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_rec (char *s);
int comprimento_rec(char *s);
int comprimento_rec(char *s);
void copia_rec(char * dest, char * orig);
void imprime_inv(char *s);
int main()
{
    char palavra[100];
    scanf("%s%*c",palavra);
    printf("\n---------\n");
    imprime_rec(palavra);
    printf("\n---------\n");
    printf("%d",comprimento_rec(palavra));
    printf("\n---------\n");
    char outra[100];
    copia_rec(outra,palavra);
    printf("%s",outra);
    printf("\n---------\n");
    imprime_inv(palavra);
    printf("\n---------\n");

    return 0;
}

void imprime_rec (char *s)
{
    if(s[0] != '\0')
    {
        printf("%c",s[0]);
        imprime_rec(&s[1]);
    }
}

int comprimento_rec(char *s)
{
    if(s[0] == '\0')
    {
        return 0;
    }
    else return 1 + comprimento_rec(&s[1]);
}

void copia_rec(char * dest, char * orig)
{
    if(orig[0] == '\0')
    {
        dest[0] = '\0';
    }
    else
    {
        dest[0] = orig[0];
        copia_rec(&dest[1],&orig[1]);
    }
}
void imprime_inv(char *s)
{
    if(s[0] != '\0')
    {
        imprime_inv(&s[1]);
        printf("%c",s[0]);
    }
}