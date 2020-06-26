#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("vui long nhap chuoi: ");
	gets(s);
	int nguyenam = 0;
	int phuam = 0;   
	int i; 
	while(s[i++] != '\0') {
	  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
	    nguyenam++;
	  else
	    phuam++;
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, nguyenam, phuam);	
	return 0;
}
