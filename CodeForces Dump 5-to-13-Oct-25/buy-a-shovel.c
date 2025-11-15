#include <stdio.h>

int main() {
    int k, r, res;
    scanf("%d %d", &k, &r);
    int count = 0;
    do {
        count++;
        res = k * count;
    } while(res % 10 != 0 && res % 10 != r);

    printf("%d", count);
    return 0;
}