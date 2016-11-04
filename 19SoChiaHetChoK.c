#include<stdio.h>
main()
{
    int a[100],i,n,k;
    printf("Nhap N:");
    scanf("%d",&n);
    printf("Nhap k:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]%k==0) printf("%d   ",a[i]);
}

