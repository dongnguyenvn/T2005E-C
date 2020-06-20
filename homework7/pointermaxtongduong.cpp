#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i, *p;
	printf("nhap so gia tri cua day : ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("nhap gia tri cua phan tu thu %d",i+1);
		scanf("%d",p+i);
	}
	int maxtongduong=0;
	int tongduong=0;
	for(i=0;i<n;i++){
		if(*(p+i)>0){
			tongduong+=*(p+i);
			if(tongduong>maxtongduong){
				maxtongduong=tongduong;
			}
		}else{
			tongduong=0;
		}
	}
	printf("gia tri lon nhat cua day so duong lien tiep la: %d",maxtongduong);
}
