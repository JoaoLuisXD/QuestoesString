#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[100];
    gets(palavra);
    fflush(stdin);
    int tam=strlen(palavra);
    int aux= '*';
    for(int i=0;i<tam;i++)
    {
       printf("%c\n",palavra[i]);
    }
    for(int i=0;i<tam;i++)
    {
       if(palavra[i]=='a'||palavra[i]=='A'||palavra[i]=='e'||palavra[i]=='E'||palavra[i]=='i'||palavra[i]=='I'||palavra[i]=='o'||palavra[i]=='O'||palavra[i]=='u'||palavra[i]=='U')
       {
           palavra[i] = aux;
       }
    }
    printf("%s", palavra);

   return 0;
}
