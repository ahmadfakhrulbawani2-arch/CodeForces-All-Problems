#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drinks, lime, salts;
    drinks = k * l / nl;
    lime = c * d;
    salts = p / np;
    int min;
    if(drinks < lime) {
        min = (drinks < salts) ? drinks : salts;
    } else {
        min = (lime < salts) ? lime : salts;
    }
    int result = min / n;
    printf("%d", result);
    return 0;
}