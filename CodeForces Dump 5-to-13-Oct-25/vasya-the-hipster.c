#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d ", &a, &b);
    int twoColors, oneColors;
    if(a > b) {
        twoColors = b;
        a -= b;
        oneColors = a / 2;
    } else {
        twoColors = a;
        b -= a;
        oneColors = b / 2;
    }
    printf("%d %d", twoColors, oneColors);
}