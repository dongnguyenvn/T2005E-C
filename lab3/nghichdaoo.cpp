#include <stdio.h>
 
int main(){
    int n, lay_du;
    printf("nhap so ngau nhien:");
    scanf("%d", &n);
    int nghich_dao = 0;
    while(n > 0){
        lay_du = n % 10;
        nghich_dao = nghich_dao * 10 + lay_du;
        n = n / 10;
    }
    printf("\nso nghich dao cua so tren la : %d", nghich_dao);
}
