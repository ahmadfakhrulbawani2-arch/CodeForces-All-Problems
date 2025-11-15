#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int steps = x / 5;
    steps = (x % 5 == 0) ? steps : steps + 1;

    printf("%d", steps);
    return 0;
}