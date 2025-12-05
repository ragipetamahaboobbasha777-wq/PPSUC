#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T;
    scanf("%lf %lf %lf", &P, &R, &T);

    double amount = P * pow((1 + R / 100), T);
    double CI = amount - P;

    printf("%.2f", CI);

    return 0;
}

