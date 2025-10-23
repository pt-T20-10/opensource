#include<stdio.h>

int Fibonacci(int m){
    if (m == 0)
        return 0;
    if (m == 1 || m == 2)
        return 1;
    else
        return Fibonacci(m-1) + Fibonacci(m-2);
}

void InDayFibonacci() {
    int m, n, i;

    printf("Nhap so luong phan tu muon in (m): ");
    scanf("%d", &m);
    printf("Nhap gioi han (n): ");
    scanf("%d", &n);

    printf("\nDay Fibonacci:\n");
    for (i = 0; i <= m; i++) {
        int f = Fibonacci(i);
        if (f >= n)
            break;
        printf("F[%d] = %d\n", i, f);
        
    }
}


