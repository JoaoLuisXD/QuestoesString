#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];
    printf("digite: ");
    scanf("%49[^\n]s", nome);
    printf("%s\n", nome);
    fflush(stdin);

    gets(nome);
    puts(nome);
    fflush(stdin);


    fgets(nome,50,stdin);
    puts(nome);
    fflush(stdin);


    printf("-----------");
    char destino;
    strcpy(destino,nome);
    puts(destino);
    fflush(stdin);

    return 0;
}
