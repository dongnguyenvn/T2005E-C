#include <stdio.h>
 
int main()
{
    float a, b;
    int so_nam = 0;
 
    printf("so tien ban muon gui: ");
    scanf("%f", &a);
 
    printf("so tien ban muon co: ");
    scanf("%f", &b);
 
    while(a < b) 
    {
        a = a + a * 8/100;
        so_nam++;
    }
 
    printf("sau khoang %d nam, ban co se co so tien mong muon voi lai suat 8/100 1 nam\n", so_nam);
}
