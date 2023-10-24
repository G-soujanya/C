#include<stdio.h>
#include<limits.h>
void main()
{
    int a[]={10,20,15,23,14};
    int n=5;
    int max=INT_MIN;
    int index=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    printf("peek at index %d\n",index);
}
