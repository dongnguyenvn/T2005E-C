#include<stdio.h>

int main(){
	int n;
	int s=0;
	int so_lan_nhap=0;
	while(n<=1000){
		printf("nhap n:");
		scanf("%d",&n);
		s=s+n;
		so_lan_nhap++;
	}
		float ave=(float)s/so_lan_nhap;
		printf("so lan nhap la : %d \n",so_lan_nhap);
		printf("gia tri chung binh cua cac lan nhap truoc la:%f",ave);
	}
