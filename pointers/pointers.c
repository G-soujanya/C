#include<stdio.h>
void main()
{
    int x=10,y=20,z=30;
    int *pointer[]={&x,&y,&z};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d\n",**(pointer+i));
    }
}
