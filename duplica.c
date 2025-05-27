#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int contador(char *s);
char *duplica(char * s);
int main()
{
    char p[] = "retrada";
    printf("\n%d\n",contador(p));
    char * d = duplica(p);
    printf("\n%s\n",d);


    return 0;
}
int contador(char *s)
{
    int n = 0;
    for(int i = 0; s[i] !='\0'; i++)
    {
        n++;
    }
    return n;
}
char *duplica(char * s)
{
    int n = contador(s);
    char * d = (char*)malloc(n+1*sizeof(char));
    for(int i = 0; i < n; i++)
    {
        d[i] = s[i];
    }
    d[n] = '\0';
    return d;
}