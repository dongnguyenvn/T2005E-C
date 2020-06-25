#include<stdio.h>
#include<string.h>

char timKyTuTrongChuoi(char s[],char s2[]){
    int i;
    int dem=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]==s2[0]){
            printf("ki tu *%c* co trong chuoi ban vua nhap\n",s[i]);
            dem++;
        }
    }
    if(dem==0)
    {
    	printf("Ky tu muon tim khong co trong chuoi!");
    }
}
int main()
{
    char s[100];
    char s2[2];
    printf("Nhap chuoi: ");
	scanf("%s",s);
	printf("Nhap ky tu muon tim: ");
	scanf("%s",s2);
	timKyTuTrongChuoi(s,s2);
}
