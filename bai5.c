#include <stdio.h>

void cuu_chuong(){
	int i, n;
	printf("Nhap bang cuu chuong: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d x %d= %d \n",n,i,n*i);
	}
}