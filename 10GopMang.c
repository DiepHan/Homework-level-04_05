#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,n,m,k,max,l;
    printf("So phan tu day 1:");scanf("%d",&n);
    for(i=1;i<=n;i++)
       {scanf("%d",&a[i]);}
    printf("So phan tu day 2:");scanf("%d",&m);
    for(i=1;i<=m;i++)
       {scanf("%d",&b[i]);}
    k=n+m;
    for(i=1;i<=k;i++)
    {
        if(i<=n) (c[i]=a[i]);
            else (c[i]=b[i-n]);
    }
    k=n+m;

    for (i=1;i<=k;i++)
        for(j=i;j<=k;j++)

           if (c[i]>c[j]) {l=c[i];
                            c[i]=c[j];
                            c[j]=l;}
    k=m+n;

    for (i=1;i<=k;i++)
        printf("%d  ",c[i]);
    getch();
}


