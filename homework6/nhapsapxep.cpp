#include<stdio.h>

int main(){
	int n;
	int i,j,k;
	printf("nhap gia so phan tu cua mang : ");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++){
		printf("\nNhap a[%d]: ", i+1);
		scanf("%d", &a[i]);
		for(j = 0; j < i; j++)
		{
			if(a[i] < a[j])
			{
				int tmp = a[i];
				for(k = i; k > j; k--)
				{
					a[k] = a[k - 1];
				}
				a[j] = tmp;
				break;
			}
		}
	}
	printf("mang sau khi sap xep la : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
