#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int funcao(char *palavra1, char *palavra2)
{
   int contigual = 1;
   if(strlen(palavra1)==strlen(palavra2))
   {
       int tam=strlen(palavra1);
        for(int i=0; i<tam; i++)
        {

            (palavra2);
            if(tolower(palavra1[i])!=tolower (palavra2[i]))
            {
               contigual=0;
            }
        }
   }
   else
   {
       contigual = 1;
   }
   if(contigual==1)
   {
       printf("iguais\n");
   }
   else
   {
       printf("diferentes\n");
   }

}
int main()
{
   char palavra1[100],palavra2[100];
   gets(palavra1);
   gets(palavra2);
   funcao(palavra1,palavra2);
}

