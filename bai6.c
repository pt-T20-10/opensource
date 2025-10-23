#include <stdio.h>

void tin_tiendien(){
	int dien, tien;

	printf("Nhap so dien: ");
    scanf("%d",&dien);

    if(dien<=150){
        tien=dien*500;
        printf("So tien dien la: %d",tien);
    }
    else if ((dien>=151) && (dien<=350)){
        tien=150*500+(dien-100)*550;
        printf("So tien dien la: %d",tien);
    }
    else if ((dien>=351) && (dien<=650)){
        tien=100*500+250*550+(dien-350)*650;
        printf("So tien dien la: %d",tien);
    }
    else{
        printf("So dien khong hop le");
    }
}