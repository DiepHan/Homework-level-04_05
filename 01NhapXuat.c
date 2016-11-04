#include<stdio.h>
main()
{
    int n,i,a[50];
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
