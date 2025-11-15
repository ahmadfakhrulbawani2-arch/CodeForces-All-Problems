#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int remainTime = 240 - k;
    int accuTime = 0;
    int i = 1;
    for(i; i <= n; i++) {
        accuTime += (5 * i);
        if(accuTime > remainTime) {
            i--;
            break;
        } else if(accuTime == remainTime) {
            break;
        }
    }
    (i > n) ? printf("%d\n", n) : printf("%d", i);
    return 0;
}