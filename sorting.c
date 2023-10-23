#include<stdio.h>
void main()
{
    int a[]={4,3,2,10,12,1,5,6};
    int len=sizeof(a)/sizeof(a[0]);
    /*bubble sorting
    int i;
    int j;
    for(i=0;i<len;i++)
    {
        int maxIndex=i;
        for(j=i;j<len;j++)
        {
            if(a[j]>a[maxIndex])
                maxIndex=j;
        }
        int temp=a[maxIndex];
        a[maxIndex]=a[i];
        a[i]=temp;
    }
    int i;
    int j;
    for(i=1;i<len;i++)
    {
        for(j=0;j<i;j++)
        {
        if(a[j]>a[i])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }*/
    printf("displaying array elements\n");
    int k;
    for(k=0;k<len;k++)
    {
        printf("%d ",a[k]);
    }
}