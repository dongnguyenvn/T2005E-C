#include<stdio.h>

int main(){
	int n;
	printf("nhap mot ban chon:");
	scanf("%d",&n);
	printf("nhung so chan nho hon %d la:",n); 
	for(int i=1; i<n; i++){
		if(i%2==0){
			printf("\t%d",i);
		}
	} 
} 
