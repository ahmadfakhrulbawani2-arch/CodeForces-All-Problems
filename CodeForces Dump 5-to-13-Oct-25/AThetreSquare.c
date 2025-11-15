#include <stdio.h>

int main() {
    long long m = 0, n = 0, a = 0;
    scanf("%lld %lld %lld", &m, &n, &a);

    long long p = 0, l = 0;
    p = m / a;
    l = n / a;

    if(m % a != 0) {
        ++p;
    }

    if(n % a != 0) {
        ++l;
    }
    
    long long tot = p * l;
    printf("%lld", tot);
    return 0;
}