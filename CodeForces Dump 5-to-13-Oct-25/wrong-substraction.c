#include <stdio.h>

int main() {
    int k;
    long long n;
    scanf("%lld %d", &n, &k);

    for(int i = 0; i < k; i++) {
        n = (n % 10 > 0) ? n - 1 : n / 10;
    }

    printf("%lld", n);
    return 0;
}