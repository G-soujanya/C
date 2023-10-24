#include<stdio.h>
void main()
{
    int a[]={5,4,10,1,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    int j;
    int temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
     printf("displaying array elements\n");
    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
}