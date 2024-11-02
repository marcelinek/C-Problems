#include <stdio.h>

int main(){

    int sayi1, sayi2, sayi3;
    float ortalama;

    printf("lutfen birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("lutfen ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("lutfen ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    ortalama = (sayi1 + sayi2 + sayi3) / 3;

    printf("girilen sayilarin ortalamasi: %.2f", ortalama);

    return (0);
}