#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int a, b, c;
        if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
        if (a + b == c || a + c == b || b + c == a) puts("YES");
        else puts("NO");
    }
    return 0;
}