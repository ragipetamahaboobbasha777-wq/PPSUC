#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    int total_money = 5 * X + 10 * Y;
    int chocolates = total_money / Z;

    printf("%d", chocolates);

    return 0;
}

