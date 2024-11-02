#include <stdio.h>

int main(){

    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    int karesi = sayi * sayi;

    printf("Girilen sayinin karesi: %d", karesi);

    return(0);
}