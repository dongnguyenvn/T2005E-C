#include<stdio.h>

int main(){
	float a,b;
	printf("Nhap gia tri cua a va b \n-Neu a<b thi ket qua la a*b \n-Neu a>=b thi ket qua la a/b \n");
	printf ("nhap gia tri cua a:");
	scanf("%f",&a);
	printf ("nhap gia tri cua b:");
	scanf("%f",&b);
	if(b==0){
		if(a>=0){
			printf("KHONG XAC DINH");
		}else{
			printf("Ket qua de bai = 0");
		}
	}else{
		if(a==0){
			printf("Ket qua de bai = 0");
		}else{
				if(a<b){
					float h=a*b;
					printf("ket qua de bai la a*b bang: %.f",h);
				}else{
					float t=a/b;
					printf("ket qua de bai la a/b bang: %f",t);
				}
		}
	}
}
