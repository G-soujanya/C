#include<stdio.h>
void main()
{
    int a=1000;
    int b=2050;
    int c=2049;
    /*if(a>b && a>c)
        printf("a is largest among three\n");
    else if(b>a && b>c)
        printf("b is largest among three\n");
    else 
        printf("c is largest among three\n");*/
    if(a>b && a>c)
    {
        if(b>c)
        printf("b is second larget among three\n");
        else 
        printf("c is second larget among three\n");
    }
    else if (b>a && b>c)
    {
        if(a>c)
        printf("a is second larget among three\n");
        else 
        printf("c is second larget among three\n");
    }
    else 
    {
        if(a>b)
        printf("a is second larget among three\n");
        else 
        printf("b is second larget among three\n");
    }
}
