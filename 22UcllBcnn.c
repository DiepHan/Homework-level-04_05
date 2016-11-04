#include<stdio.h>
void main()
{
 int m,n,m1,n1,r,ucll;
   printf("Nhap m n:");
   scanf("%d%d",&m,&n);
   m1=m; n1=n;
   while(r!=0)
   {
     r=m%n;
     m=n;
     n=r;

   }
    ucll=m;
    printf("UCLL=%d\n",ucll);
    printf("BCNN=%d",(m1*n1)/ucll);

}

