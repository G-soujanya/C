#include<stdio.h>
void naturalnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
}
void evennum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d",i);
    }
}
void oddnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        printf("%d",i);
    }
}
void factorial(int n)
{
    int fact=1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
}
void incrasePattern(int n)
{
    int i;
    int sum=n;
    for(i=1;i<=5;i++)
    {
        printf("%d ",sum);
        sum=sum*10+n;
    }
}
void incrasePatternByOne(int n)
{
    int i;
    int sum=n;
    for(i=1;i<=5;i++)
    {
        printf("%d ",sum);
        sum=sum*10+1;
    }
}
void fractionPattrn(int n)
{
    int i;
    int fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("%d/%d ",i,fact);
    }
}
void fractionPattrnX(int n)
{
    int i;
    int fact=1;
    printf("x^%d/%d ",0,1);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("x^%d/%d ",i,fact);
    }
}
void main()
{
    printf("enter the number");
    int n;
    scanf("%d",&n);
    //naturalnum(n);
    //evennum(n);
    //oddnum(n);
    //factorial(n);
    //incrasePattern(n);
    //incrasePatternByOne(n);
    fractionPattrnX(n);
}