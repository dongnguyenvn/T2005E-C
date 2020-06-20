#include<stdio.h>

int main(){
	int a[6]={1,2,3,4,5,6};
	int k,i;
	printf("\nNhap k: ");
	scanf("%d", &k);
	while(k--)
	{
		int tmp = a[5];
		for(int i = 5; i>0; i--)
		{
			a[i] = a[i - 1];
		}
			a[0] = tmp;
	}
	printf("mang sau khi nhay la: ");
	for(i=0;i<6;i++){
		printf("%d",a[i]);
	}
}

