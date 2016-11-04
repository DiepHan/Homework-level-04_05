#include<stdio.h>
void main()
{
    int a[100],i,n,k,x;
    printf("nhap n:");scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("phan tu xoa:");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(a[i]==x)
        {
            for(k=i;k<=n-1;k++)
                a[k]=a[k+1];
                i--;
            n--;
        }

        }
    printf("mang da xoa:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    }




