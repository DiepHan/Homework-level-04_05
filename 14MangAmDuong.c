#include<stdio.h>
void main()
{
    int a[100],i,n,k,j;
    printf("Nhap n:");scanf("%d",&n);
    for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
    for (i=1;i<=n;i++)
       {
        for(j=i+1;j<=n;j++)
        if (a[i]>a[j]) {k=a[i];
                            a[i]=a[j];
                            a[j]=k;}}
   printf("mang am:");
for(i=1;i<=n;i++)
{

    if (a[i]<=0) printf("%5.0d",a[i]);}
printf("\n");
printf("mang duong:");

for(i=1;i<=n;i++)
{

        if (a[i]>=0) printf("%5.0d",a[i]);}}




