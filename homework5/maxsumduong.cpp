#include<stdio.h>

int main(){
	int n,i;
	printf("nhap chieu dai mang:");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
		printf("nhap gia tri so %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("mang da nhap la : ");
	for(i=0;i<n;i++){
		printf("  %d\t",a[i]);
	}
	int sumduong=0;
	int maxsumduong=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			sumduong+=a[i];
			if(sumduong>maxsumduong){
				maxsumduong=sumduong;
			}
		}else{
			sumduong=0;
		}
	}printf("\nchuoi so duong có t0ng lon nhat la:%d",maxsumduong);
}
