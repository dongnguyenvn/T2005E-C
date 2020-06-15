#include <stdio.h>

int main()
{
    float tien_ban_dau;
    printf("nhap so tien muon gui:");
    scanf("%f",&tien_ban_dau);
    int so_nam;
    printf("nhap so nam muon tien:");
    scanf("%d",&so_nam);
    float tien_ve_sau = tien_ban_dau;
    for(int i = 0; i < so_nam; i++){
        float lai = tien_ve_sau * (8.0 /100.0);
        tien_ve_sau += lai;  
	} 
    printf("tien tiet kiem sau %d nam la:%f",so_nam,tien_ve_sau);
}
