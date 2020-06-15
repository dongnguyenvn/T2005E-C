#include<stdio.h>

int main(){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
	printf("cac uoc cua %d la: ",n);
	int s=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			s+=i;
			printf("%d\t",i);
		}
	}
	printf("\ntong cac uoc s=%d",s);
}
