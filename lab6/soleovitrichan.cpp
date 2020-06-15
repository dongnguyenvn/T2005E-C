#include<stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	int sum=0,socacsole=0;
	float average;
	for(int i=0;i<n;i++){
		printf("nhap gia tri so %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		if(i%2==0 && a[i]%2!=0){
			socacsole++;
			sum+=a[i];
		}
	}
	average=(float)sum/socacsole;
	printf("trun binh cong cac so le trong mang la: %0.1f",average);
}
