#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    long long min_votes = (M / 2) + 1;
    printf("%lld", min_votes);

    return 0;
}

