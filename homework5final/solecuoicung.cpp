#include<stdio.h>

int main(){
	int n,i,dem=0;
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
	for(i=n-1;i>=0;i--){
		if(a[i]%2!=0){
			dem++;
			break;
		}
	}if(dem==0){
		printf("\nkhong co so le nao trong mang !");
	}else{
		printf("\nso le cuoi cung cua mang la: %d",a[i]);
	}		
}
