#include<stdio.h>
void main()
{
    int i,j,n,a[100][100];
    printf("nhap n:");scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
        if(j!=1) a[i][j]=0;
        a[i][1]=1;
        a[1][2]=1;
       }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
    for(i=1;i<=n+1;i++)
    {printf("%5.0d",a[n][i]);}
    getch();

}


