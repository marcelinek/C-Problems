#include <stdio.h>

int main(){

    int kenar1, kenar2, cevre, alan;

    printf("lutfen bir kenar degeri giriniz: ");
    scanf("%d", &kenar1);

    printf("lutfen bir kenar degeri daha giriniz: ");
    scanf("%d", &kenar2);

    cevre = 2 * (kenar1 + kenar2);
    alan = kenar1 * kenar2;

    printf("dortgenin cevresi: %d\n", cevre);
    printf("dortgenin alani: %d", alan);

    return (0);
}