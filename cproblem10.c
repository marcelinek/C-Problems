#include <stdio.h>

int main(){

    int A, B, gecici;

    printf("A sayisini giriniz: ");
    scanf("%d", &A);

    printf("B sayisini giriniz: ");
    scanf("%d", &B);

    gecici = A;

    A = B;

    B = gecici;

    printf("A sayisi: %d \nB sayisi: %d", A,B);

    return (0);

}