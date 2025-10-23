#include <stdio.h>

int GiaiThua(int n){
    if (n==0 || n ==1)
        return 1;
    else    
        return n * GiaiThua(n - 1);
}

void InGiaiThua(){

    int n, kq;
    printf("Nhap N!: ");
    scanf("%d", &n);
    kq = GiaiThua(n);
    printf("%d! = %d\n", n, kq);
}

