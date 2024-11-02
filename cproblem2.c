#include <stdio.h>

int main(){

    int sayi1, sayi2, toplam, carpim;

    printf("lutfen birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("lutfen ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;
    carpim = sayi1 * sayi2;

    printf("girilen sayilarin toplami: %d\n", toplam);
    printf("girilen sayilarin carpimi: %d", carpim);

    return(0);
}