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
	int demsoluong=0;
	int maxsoluon=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			demsoluong++;
			if(demsoluong>maxsoluon){
				maxsoluon=demsoluong;
			}
		}else{
			demsoluong=0;
		}
	}printf("\n So luong so duong lien tiep lon nhat la: %d",maxsoluon);
}
