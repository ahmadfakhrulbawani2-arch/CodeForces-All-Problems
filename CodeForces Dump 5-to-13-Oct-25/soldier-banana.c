#include <stdio.h>

int main() {
    int k, w;
    long long n;
    scanf("%d %lld %d", &k, &n, &w);

    // Sn aritmatik = n / 2 (2a + (n - 1)b) lalu dikali k

    long long total = (w * (2+(w-1)) / 2) * k;
    long long borrow = total - n;

    if(borrow <= 0) {
        printf("0\n");
    } else {
        printf("%lld", borrow);
    }
}