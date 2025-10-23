#include <stdio.h>

void cuuchuong(){
	int i, n;
	printf("Nhap bang cuu chuong: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d x %d= %d \n",n,i,n*i);
	}
}