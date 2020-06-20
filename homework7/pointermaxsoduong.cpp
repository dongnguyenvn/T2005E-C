#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i, *p;
	printf("nhap so phan tu cua day : ");
	scanf("%d",&n);	
	p= (int *)malloc(n*sizeof(int));	
	for(i=0;i<n;i++){
		printf("nhap gia tri cua phan tu thu %d",i+1);
		scanf("%d",p+i);
	}
	int socacsoduong=0;
	int maxsoduong=0;	
	for(i=0;i<n;i++){
		if(*(p+i)>0){
			socacsoduong++;
			if(socacsoduong>maxsoduong){
				maxsoduong=socacsoduong;
			}
		}else{
		socacsoduong=0;
		}
	}
	printf("so luong so duong nhieu nhat trong day la: %d",maxsoduong);
}
