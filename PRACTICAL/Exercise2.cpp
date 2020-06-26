#include<stdio.h>
float average(int a[],int n){
	float ave=0,s=0;
	int dem=0;
	for(int i=0;i<n;i++){
		s+=a[i];
		dem++;
	}
	ave=s/dem;
	return ave;
}
int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri cua phan tu thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	float tb=average(a,n);
	
	printf("trung binh so nguyen trong mang la:%f",tb);
}
