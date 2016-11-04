#include<stdio.h>
void main()
{
    int a[100],i,j,n,k,x;
    printf("nhap n:");scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        if(a[i]<0)
        {
            for(k=i;k<=n-1;k++)
                a[k]=a[k+1];
                i--;
            n--;
        }

        }
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        {
          if(a[i]>a[j]) {x=a[i];
           a[i]=a[j] ;
           a[j]=x;}
        }
    for (i=1;i<=n;i++)
        printf("%d\t",a[i]);
    }




