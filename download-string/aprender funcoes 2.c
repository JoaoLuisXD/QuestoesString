#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char origem[50];
    char destino[50];
    printf("so origem: ");
    gets(origem);
    puts(origem);
    puts(destino);
    printf("\n----\n");
    strcpy(destino,origem);
    printf("origem e destino: \n");
    puts(origem);
    puts(destino);


    return 0;
}
