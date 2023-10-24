#include<stdio.h>
void main()
{
    int a[2][3];
    int b[2][3]={{1,2,3},{4,5,6}};
    printf("enter array elements\n");
    int i;
    int j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("displaying array elements\n");
    int k;
    int l;
    for(k=0;k<2;k++)
    {
        for(l=0;l<3;l++)
        {
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
    printf("\n");
    printf("addtion of two matrices\n");
    int g;
    int h;
    for(g=0;g<2;g++)
    {
        for(h=0;h<3;h++)
        {
            printf("%d ",a[g][h]+b[g][h]);
        }
        printf("\n");
    }
    printf("\n");
    printf("diagonal elements in array");
    int ai;
    int bi;
    for(ai=0;ai<2;ai++)
    {
        for(bi=0;bi<3;bi++)
        {
            if(ai==bi)
                printf("%d ",a[ai][bi]);
        }
        printf("\n");
    }
    printf("\n");
    printf("multiplication of two matrices");
    int c[3][2]={{1,2},{3,4},{5,6}};
    int r[2][2];
    int d;
    int e;
    int f;
    int sum=0;
    for(d=0;d<2;d++)
    {
        for(e=0;e<3;e++)
        {
            r[d][e]=0;
            for(f=0;f<3;f++)
                r[d][e]+=a[d][f]*c[f][e];
        }
    }
    printf("displaying");
    int x;
    int z;
    for(x=0;x<2;x++)
    {
        for(z=0;z<2;z++)
        {
            printf("%d ",r[x][z]);
        }
        printf("\n");
    }printf("\n");
    int tr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int transpose[4][4];
    int ii;
    int jj;
    for(ii=0;ii<4;ii++)
    {
        for(jj=0;jj<4;jj++)
        {
            if(ii>jj)
            {
                int temp=tr[ii][jj];
                transpose[ii][jj]=tr[jj][ii];
                transpose[jj][ii]=temp;
            }
            if(jj==ii)
            transpose[ii][jj]=tr[ii][jj];
        }
    }
    int ie;
    int je;
    for(ie=0;ie<4;ie++)
    {
        for(je=0;je<4;je++)
        {
            printf("%d ",transpose[ie][je]);
        }
        printf("\n");
    }
}
