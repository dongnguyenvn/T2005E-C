#include<stdio.h>;

int main()
{
	int a,b,c;
	printf("nhap gia tri cua a: ");
	scanf("%d",&a);
	printf("nhap gia tri cua b: ");
	scanf("%d",&b);
	printf("nhap gia tri cua c: ");
	scanf("%d",&c);
	int min = a;
	
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	printf("gia tri nho nhat trong ba so ( %d , %d , %d ) la %d",a,b,c,min);
}
