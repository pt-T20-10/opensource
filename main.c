#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("3- Tinh phuong trinh bac hai\n");
    printf("4- Tinh diem trung binh ba mon\n");
    printf("5- Tinh tien dien\n");
    printf("6- In bang cuu chuong\n");
    printf("7- Tinh giai thua\n");
    printf("8- In tam giac vuong\n");
    printf("9- Kiem tra nhap so tuan tu\n");
    printf("10- In day fibonnaci nho hon n\n");
    printf("11- In tam giac can\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        xemthang();
        menu();
        break;
    case 2:
        namnhuan();
        menu();
        break;
    case 3:
        xemthang();
        menu();
        break;
    case 4:
        namnhuan();
        menu();
        break;
    case 5:
        xemthang();
        menu();
        break;
    case 6:
        namnhuan();
        menu();
        break;
    case 7:
        xemthang();
        menu();
        break;
    case 8:
        namnhuan();
        menu();
        break;
    case 9:
        xemthang();
        menu();
        break;
    case 10:
        namnhuan();
        menu();
        break;
    case 11:
        xemthang();
        menu();
        break; 
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
