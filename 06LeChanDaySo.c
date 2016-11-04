#include<stdio.h>
main()
{
    int a[50],i,n;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Chan:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Le:");
     for(i=0;i<n;i++)
    {
        if(a[i]%2!=0) printf("%d\t",a[i]);
    }
}
