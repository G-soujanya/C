#include<stdio.h>
void main()
{
    int arr[3][2]={
        {1,2},
        {5,4},
        {7,8},
    };
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",arr+1);
    printf("%d\n",**(arr+1));
    printf("%d\n",**(&arr[0]));
    printf("%d\n",*(&arr[0][0]+1));
}