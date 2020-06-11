#include <stdio.h>
 
int main(){
    char c;
    printf("\nNhap c = ");
    do{
        scanf("%c ", &c);
        if(c!='y'&&c!='Y'&&c!='n'&&c!='N'){
            printf ("\nNhap sai vui long nhap lai c =");
        }
    }while(c!='y'&&c!='Y'&&c!='n'&&c!='N');
        printf("\nBn vua nhap %c", c);
}
