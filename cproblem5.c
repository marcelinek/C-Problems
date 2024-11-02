#include <stdio.h>
#define pi 3.14

int main(){

    int yaricap;
    float alan;

    printf("lutfen yaricap degerini giriniz: ");
    scanf("%d", &yaricap);

    alan = pi * (yaricap * yaricap);

    printf("%d yaricapli dairenin alani: %.2f", yaricap, alan);

    return (0);

}