#include<stdio.h>
void main()
{
    int a=10;
    int b=20;
    int c=30;
    /*printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("AFTER SWAPING\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);*/
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    a=a*b*c;
    b=a/(b*c);
    c=a/(b*c);
    a=a/(c*b);
    printf("AFTER SWAPING\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
}
