#include <stdio.h>

int main() {
    int n, h;
    scanf("%d %d", &n, &h);
    int a[n];
    int width = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        (a[i] > h) ? width += 2 : width++;
    }

    printf("%d", width);
}