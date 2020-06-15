#include<stdio.h>

int main(){
	int n,x;
	printf("nhap phan tu can kiem tra:");
	scanf("%d",&x);
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri so %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(int i =0;i<n;i++){
		if(a[i]==x){
			printf("%d co trong mang",x);
		}else{
			printf("%d khong co trong mang",x);S
		}
	}
}
