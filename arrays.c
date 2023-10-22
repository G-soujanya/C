#include<stdio.h>
void main( )
{
    int a[6]={1,2,3,4,0,0};
    int len=4;
    //insert at beginnning
    int value;
    printf("enter the value to insert");
    scanf("%d",&value);
    for(int i=len-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]= value;
    len++;
    //insertion at end
    int value1;
    printf("enter the value to insert at end");
    scanf("%d",&value1);
    a[len]=value1;
    len++;
    //delete at end
    len--;
    //delete at begininng 
    int o;
    for(o=0;o<len;o++)
    {
        a[o]=a[o+1];
    }
    len--;
    //displaying array elements
    printf("displaying array elements\n");
    int k;
    for(k=0;k<len;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    printf("displaying array elements in reverse order\n");
    int l;
    for(l=0;l<len;l++)
    {
        printf("%d ",a[len-1-l]);
    }
    //finding max element in the array
    int max=0;
    int j=0;
    for(j=0;j<len;j++)
    {
        if(a[j]>max)
            max=a[j];
    }
    printf("max element is %d",max);
}