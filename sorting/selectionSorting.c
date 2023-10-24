#include<stdio.h>
void main()
{
    int a[]={7,4,10,8,3,1};
    int n=6;
    int i;
    int j;
    int minIndex;
    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
                minIndex=j;
        }
        if(minIndex!=i)
        {
            int temp=a[minIndex];
            a[minIndex]=a[i];
            a[i]=temp;
        }
    }
     printf("displaying array elements\n");
    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
}