#include<stdio.h>

float diem_tb(){
    float toan, van, anh;

    printf("Nhập điểm toán: "); scanf("%f", &toan);
    printf("Nhập điểm văn: "); scanf("%f", &van);
    printf("Nhập điểm anh: "); scanf("%f", &anh);

    float diem_cuoi_ky = ((toan*2 + van*2 + anh)/5);

    printf("Điểm cuối kỳ là: %.2f\n", diem_cuoi_ky);
    if(diem_cuoi_ky < 3){
        printf("Loại yếu");
    }
    else if(diem_cuoi_ky >= 3 && diem_cuoi_ky <=5){
        printf("Loại trung bình");
    }
    else if(diem_cuoi_ky > 5 && diem_cuoi_ky <= 7.9){
        printf("Loại khá");
    }
    else{
        printf("Loại giỏi");
    }
}

