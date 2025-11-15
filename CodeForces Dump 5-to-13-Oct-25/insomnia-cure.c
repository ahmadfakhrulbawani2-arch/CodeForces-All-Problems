#include <stdio.h>

int main() {
    int k, l, m, n, d;
    scanf("%d\n%d\n%d\n%d\n%d", &k, &l, &m, &n, &d);
    int damaged = 0;

    for(int i = 1; i <= d; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged++;
        }
    }

    printf("%d", damaged);
    return 0;
}