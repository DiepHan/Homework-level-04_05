#include <stdio.h>
void main()
{
    int n,i;
    float s;
    printf("Nhap n: "); scanf("%d",&n);
    s=0;
    i=1;
    while (i<=n)
    {   s+= 1.0/i;
        i++;}
    printf(" S= %1.3f",s);
    getch();
}


