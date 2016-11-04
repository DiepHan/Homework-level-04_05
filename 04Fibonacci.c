#include <stdio.h>
void main()
{
    int n,i,a[100];
    printf("Nhap n: ");scanf("%d",&n);
    a[1]=1;
    a[2]=1;
    for( i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];}
    printf("F(%d) = %d",n,a[n]);
    getch();
}

