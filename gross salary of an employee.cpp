#include <stdio.h>

int main() {
    float salary, hra, da, pf, gross;

    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    pf = 0.12 * salary;
    gross = salary + hra + da + pf;

    printf("%.2f\n", pf);
    printf("%.2f\n", gross);

    return 0;
}

