#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int funcao(char *palavra)
{
   int cont=0;
   int tam=strlen(palavra);
   for(int i=0; i<tam; i++)
    {
        char letra=tolower(palavra[i]);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        cont++;
    }
    return cont;
}
int main()
{
   char palavra[100];
   gets(palavra);
   printf("%d\n",funcao(palavra));
}
