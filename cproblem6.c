#include <stdio.h>

int main(){

    int fiyat, kdv;
    float guncel_fiyat;

    printf("lutfen fiyat degeri giriniz: ");
    scanf("%d", &fiyat);

    printf("lutfen kdv oraninin giriniz: ");
    scanf("%d", &kdv);

    guncel_fiyat = fiyat + (fiyat * kdv / 100);

    printf("girilen fiyatin guncel fiyati: %.2f", guncel_fiyat);

    return (0);
}