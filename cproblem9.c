#include <stdio.h>

int main(){

    int sayi, toplam = 0;

    printf("birinci sayiyi giriniz: ");
    scanf("%d", &sayi);

    toplam = toplam + sayi;

    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi);

    toplam = toplam + sayi;
    
    printf("ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi);

    toplam = toplam + sayi;

    printf("girilen sayilarin toplami: %d", toplam);

    return (0);
}