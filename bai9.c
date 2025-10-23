#include<stdio.h>

void nhap_so(){
    int n, m;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    int i = 1; 
    while (i <= n) {
        printf("Nhap lan thu %d: ", i);
        scanf("%d", &m);

        if (m != i) {
            printf("Day so khong tuan tu. Vui long nhap lai tu dau.\n");
            i = 1;  // reset để nhập lại từ đầu
        } else {
            i++;    // đúng số thứ tự, nhập số tiếp theo
        }
    }
}

int main(){
    nhap_so();
    return 0;
}