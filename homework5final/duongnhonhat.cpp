#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap gia tri cua mang : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri so %d : ",i+1);
		scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
    	min=a[i];
    	break;
    	}
	}
	if(min<=0){
		printf("mang khong co gia tri duong");
	}
	else{
    	for(i=0;i<n;i++){
      		if(a[i]<min && a[i]>0){
				min=a[i];
    	}
    	}printf("so duong nho nhat trong mang la %d",min);
	}
}
