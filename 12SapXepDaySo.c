#include<stdio.h>
void main()
{
    int a[100],i,n,k,j;
    printf("Nhap n:");scanf("%d",&n);
    for(i=1; i<=n; i++)
{
    printf("Nhap a[%d]: ",i);
    scanf("%d",&a[i]);

}

    for (i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    if (a[i]>a[j]) {k=a[i];
                    a[i]=a[j];
                    a[j]=k;}
}

    for (i=1;i<=n;i++)
        printf("%d  ",a[i]);
}



