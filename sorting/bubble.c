#include<stdio.h>
void main()
{
    int a[]={16,14,5,6,8};
    int len=sizeof(a)/sizeof(a[0]);
    int i;
    int j;
    int flag;
    for(i=0;i<len-1;i++)
    {
        flag=0;
        for(j=0;j<len-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    printf("displaying array elements\n");
    int k;
    for(k=0;k<len;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
}
