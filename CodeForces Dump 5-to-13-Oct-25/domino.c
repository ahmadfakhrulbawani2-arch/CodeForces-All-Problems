#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int luas = m * n;

    int domNum = luas / 2;
    printf("%d", domNum);
    return 0;
}