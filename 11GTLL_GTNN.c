#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    printf("Nhap n:");scanf("%d",&n);
    for(i=1;i<=n;i++)
        {scanf("%d",&a[i]);}
    {max=a[1];
    for(i=2;i<=n;i++)
        if (max<a[i]) max=a[i];
        printf("max=%d\n",max);}
    {min=a[1];
    for(i=2;i<=n;i++)
        if (min>a[i]) min=a[i];
        printf("min=%d",min);}
}


