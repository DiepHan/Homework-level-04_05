#include<stdio.h>
void main()
{
    int i,j,n,m,a[100][100],k;
    printf("Nhap cap cua ma tran m x n:");scanf("%d%d",&m,&n);
    k=1;
    for(i=1;i<=m;i++)
       for(j=1;j<=n;j++)
        a[i][j]=k++;

    for(i=1;i<=m;i++)
       {for(j=1;j<=n;j++)
        printf("%5.0d",a[i][j]);
        printf("\n");}

    getch();}



