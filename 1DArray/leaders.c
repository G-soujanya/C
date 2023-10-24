#include<stdio.h>
void main()
{
    int a[]={16,17,4,3,5,2};
    int n=6;
   /* int i;
    int j;
    int flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>=a[i])
                flag=1;
        }
        if(flag==0)
            printf("%d ",a[i]);
    }*/
    int i;
    int j;
    int max=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>max)
        {
            max=a[i];
            printf("%d ",max);
        }
    }
}