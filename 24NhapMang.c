#include<stdio.h>
main()
{
    int a[100],i,n;
    printf("Nhap N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d   ",a[i]);
}
