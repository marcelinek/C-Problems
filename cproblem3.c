#include <stdio.h>

int main(){

    int degisken, denklem;

    printf("lutfen x degerini giriniz: ");
    scanf("%d", &degisken);

    denklem = (3 * degisken) * (3 * degisken);

    printf("girilen enkelmin sonucu: %d", denklem);

    return (0);

}