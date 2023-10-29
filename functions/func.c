#include<stdio.h>
#include<math.h>
void printPrime(int start,int end)
{
    int i;
    int j;
    for(i=start;i<=end;i++)
    {
        int flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ",i);
    }
    printf("\n");
}
void armstrong(int n)
{
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if(temp==sum)
        printf("Given number is armstrong number");
    else 
        printf("Given number is not a armstrong number");
    printf("\n");
}
int sumofnaturalnum(int n)
{
    if(n==0)
        return 0;
    return n+sumofnaturalnum(n-1);
}
int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void reverseString()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        reverseString();
        printf("%c",c);
    }
}
int power(int base,int power)
{
    int value=1;
    while(power!=0)
    {
        value*=base;
        power--;
    }
    return value;
}
int checkPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void sumasprime(int n)
{
    int i;
    for(int i=2;i<=n/2;i++)
    {
        if(checkPrime(i)==1)
            if(checkPrime(n-i)==1)
                printf("%d=%d+%d\n",n,i,n-i);
    }
    
}
void binarytodecimal(long long n)
{
    int decnum=0;
    int i=0;
    while(n!=0)
    {
        int rem=n%10;
        decnum+=rem*power(2,i);
        i++;
        n=n/10;
    }
    printf("%d\n",decnum);
}
void decimaltobinary(int n)
{
    long long binary=0;
    int i=1;
    while(n!=0)
    {
        int rem=n%2;
        binary+=rem*i;
        n=n/2;
        i=i*10;
    }
    printf("%lld",binary);
}
void octaltodecimal(long long n)
{
    int decnum=0;
    int i=0;
    while(n!=0)
    {
        int rem=n%10;
        decnum+=rem*power(8,i);
        i++;
        n=n/10;
    }
    printf("%d\n",decnum);
}
void decimaltooctal(int n)
{
    long long binary=0;
    int i=1;
    while(n!=0)
    {
        int rem=n%8;
        binary+=rem*i;
        n=n/8;
        i=i*10;
    }
    printf("%lld",binary);
}
void main()
{
    int a=10;
    int b=20;
    //printPrime(1,20);
    //armstrong(1);
    //printf("%d",sumofnaturalnum(4));
    //printf("%d",factorial(5));
   // printf("%d ",gcd(2,3));
   //printf("enter a sentence");
   //reverseString();
   //power(2,10);
   //sumasprime(34);
   //binarytodecimal(1);
   //octaltodecimal(116);
   //decimaltobinary(10);
   //decimaltooctal(78);
}
