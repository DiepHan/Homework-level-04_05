#include<stdio.h>
main()
{
	int a[50][50],n,j,i,gt,d,hang,cot;
	printf("nhap n: ");
	scanf("%d",&n);
	d=0; gt=1; hang=n; cot=n;
	while(gt<=n*n){
		for(i=d;i<cot;i++) a[d][i]=gt++;
		for(i=d+1;i<hang;i++) a[i][cot]=gt++;
		for(i=cot-1;i>d;i--) a[hang][i]=gt++;
		for(i=hang-1;i>d-1;i--) a[i][d]=gt++;
		d++; hang--; cot--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
