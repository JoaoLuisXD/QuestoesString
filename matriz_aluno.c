#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char * cria_linha();
char * ler_linha();
int lenomes(char **alunos);
void liberanomes(int n, char **alunos);
void imprimenomes(int n, char **alunos);

int main()
{
    char *alunos = cria_linha();
    lenomes(&alunos);
    imprimenomes(10,&alunos);
    liberanomes(10,&alunos);
    return 0;
}

char * cria_linha()
{
    return NULL;
}
char * ler_linha()
{
    char * linha = (char*)malloc(MAX*sizeof(char));
    if(linha != NULL)
    {
        printf("digite: ");
        scanf("%s%*c",linha);    
    }
    else exit(1);
    return linha;
}
int lenomes(char **alunos)
{
    int n;
    do
    {
        printf("digite o numero de alunos: ");
        scanf("%d",&n);
    } while (n>MAX);
    for(int i=0;i<n;i++)
    {
        alunos[i] = ler_linha();
        
    }
    return n;
    
}
void liberanomes(int n, char **alunos)
{
    for(int i=0;i<n;i++)
    {
        free(alunos[i]);
    }
}
void imprimenomes(int n, char **alunos)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",alunos[i]);
    }
}