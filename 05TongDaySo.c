#include<stdio.h>
main()
{
    int a[50],Tong,i,n;
    printf("Nhap so phan tu trong day:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    Tong=0;
    for(i=0;i<n;i++)
        Tong=Tong+a[i];
    printf("%d",Tong);
}
