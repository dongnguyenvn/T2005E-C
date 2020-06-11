#include<stdio.h>

int main(){
	int n;
	//cah 1
//	do{
//		printf("nhap 1 thu trong tuan: ");
//		scanf("%d",&n);
//		if(n<2 || n>8){
//			printf("\nban nhap sai vui long nhap lai\n");
//		}
//	}while(n<2 || n>8);
//		if(n==8){
//			printf("hom nay la chu nhat");
//		}else{
//			printf("hom nay la thu %d",n);
//		}
	//cach 2
	printf("nhap 1 thu trong tuan: ");
	scanf("%d",&n);	
	while(n<2 || n>8){
	printf("nhap sai xin nhap lai \n");
	printf("nhap lai thu trong tuan: ");
	scanf("%d",&n);
	}
	if(n==8){
		printf("hom nay la chu nhat");
	}else{
		printf("hom nay la thu %d",n);
	}
}
