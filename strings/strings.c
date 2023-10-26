#include<stdio.h>
#include<string.h>
void main()
{
    /*char c[]="hello";
    int len=0;
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        len++;
    }
    printf("%d ",len);
    char c[5];
    scanf("%s",c);
    printf("%s",c);
    char c[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%c",&c[i]);
    }
    printf("%s",c);
    char str[]="HELLOworld";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s ",str);*/
    char str[]="hello world ratio";
    char str2[]="world";
    //strcpy(str2,str);
    //strcat(str,str2);
    //printf("%d ",strlen(str));
    //printf("%s",str);
    //printf("%d ",strncmp(str,str2,5));
    char* c=strstr(str,str2);
    printf("%s",c);
}
