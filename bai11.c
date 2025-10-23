#include<stdio.h>

void tam_giac_sao(){
    int n, i, j, k;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    tam_giac_sao();
    return 0;

}