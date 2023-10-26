#include<stdio.h>
void main()
{
    /*char str[]="346923";
    int num=0;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        num=num*10+str[i]-'0';
    }
    printf("%d\n",num);
    char c[2][4]={"hel"," jio"};
    printf("%s",c[0]);*/
    char str[]="hello";
    char str1[strlen(str)];
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        str1[i]=str[i];
    }
    printf("%s",str1);
 }