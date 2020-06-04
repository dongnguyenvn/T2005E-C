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
	int max = a;
	
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	printf("gia tri lon nhat trong ba so ( %d , %d , %d ) la %d",a,b,c, max);
}
