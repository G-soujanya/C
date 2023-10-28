#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int x=10,y=20,z=30;
    int *pointer[]={&x,&y,&z};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d\n",**(pointer+i));
    }
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("%d",a);
    printf("%d",b);
}