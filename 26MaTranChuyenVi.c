#include<stdio.h>
main()
{
    int a[4][5],i,j;
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<4;i++){
        for(j=0;j<5;j++)
        printf("%d\t",a[i][j]);
    printf("\n");}
    printf("Chuyen vi\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++)
        printf("%d\t",a[j][i]);
    printf("\n");}


}

