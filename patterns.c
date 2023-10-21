#include<stdio.h>
void pattern1(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern2(int n)
{
    int i;
    for(i=n;i>0;i--)
    {
        int j;
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern3(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int l;
        for(l=1;l<n-i;l++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern4(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int l;
        for(l=1;l<n-i;l++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern5(int n)
{
    int l;
    for(l=n;l>=1;l--)
    {
        int j;
        for(int j=0;j<n-l;j++)
    {
        printf(" ");
    }
    int i;
    for(i=0;i<l;i++)
    {
        printf("*");
    }
    printf("\n");
    }
}
void pattern6(int n)
{
    int l;
    for(l=n;l>=1;l--)
    {
        int j;
        for(int j=0;j<n-l;j++)
    {
        printf(" ");
    }
    int i;
    for(i=0;i<l;i++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
void pattern7(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        int k;
        for(k=1;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern8(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int l1;
        for(l1=1;l1<n-i;l1++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    int l;
    for(l=n-2;l>=0;l--)
    {
        int o;
        for(int o=0;o<n-l-1;o++)
    {
        printf(" ");
    }
    int p;
    for(p=0;p<=l;p++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
void pattern9(int n)
{
    int l;
    for(l=n-1;l>=0;l--)
    {
        int o;
        for(int o=0;o<n-l-1;o++)
    {
        printf(" ");
    }
    int p;
    for(p=0;p<=l;p++)
    {
        printf("* ");
    }
    printf("\n");
    }
    int i;
    for(i=0;i<n;i++)
    {
        int l1;
        for(l1=1;l1<n-i;l1++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern10(int n)
{
    int l;
    for(l=n-1;l>=0;l--)
    {
        int o;
        for(int o=0;o<n-l-1;o++)
    {
        printf(" ");
    }
    int p;
    for(p=0;p<=l;p++)
    {
        if(p==0 || p==l || l==n-1)
        printf("* ");
        else 
        printf("  ");
    }
    printf("\n");
    }
    int i;
    for(i=0;i<n;i++)
    {
        int l1;
        for(l1=1;l1<n-i;l1++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i || i==n-1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}
void pattern11(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int l;
        for(l=1;l<n-i;l++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i || i==n-1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}
void pattern12(int n)
{
    int l;
    for(l=n;l>=1;l--)
    {
        int j;
        for(int j=0;j<n-l;j++)
    {
        printf(" ");
    }
    int i;
    for(i=0;i<l;i++)
    {
        if(i==0 || i==l-1 || l==n)
        printf("* ");
        else 
        printf("  ");
    }
    printf("\n");
    }
}
void pattern13(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int l1;
        for(l1=1;l1<n-i;l1++)
        {
            printf(" ");
        }
        int j;
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            printf("* ");
        else    
            printf("  ");
        }
        printf("\n");
    }
    int l;
    for(l=n-2;l>=0;l--)
    {
        int o;
        for(int o=0;o<n-l-1;o++)
    {
        printf(" ");
    }
    int p;
    for(p=0;p<=l;p++)
    {
        if(p==0 || p==l)
        printf("* ");
        else
        printf("  ");
    }
    printf("\n");
    }
}
void pattern14(int n)
{
    int i;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}
void pattern15(int n)
{
    int i;
    int count=1;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<=i;j++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
}
void pattern16(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        int k;
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        int count=1;
        int j;
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count=count*(i-j)/j;
        }
        printf("\n");
    }
}
void main()
{
    printf("enter the number");
    int n;
    scanf("%d",&n);
    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    //pattern5(n);
    //pattern6(n);
    //pattern7(n);
    //pattern8(n);
    //pattern9(n);
    //pattern10(n);
    //pattern11(n);
    //pattern12(n);
    //pattern13(n);
    //pattern14(n);
    //pattern15(n);
    pattern16(n);
}