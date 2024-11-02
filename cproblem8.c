#include <stdio.h>

int main(){

    int gun, hafta, yil;

    printf("lutfen gun sayisini giriniz: ");
    scanf("%d", &gun);

    yil = gun / 365;
    gun = gun - (yil * 365);

    hafta = gun / 7;
    gun = gun - (hafta * 7);

    printf("girilen gun sayisi: %d yil, %d hafta, %d gun", yil, hafta, gun);

    return (0);
}