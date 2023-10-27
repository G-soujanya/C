#include<stdio.h>
void main()
{
    int a=10;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
    printf("%d",***d);
    ***d=20;
    printf("%d",***d);
    printf("%d",a);
}