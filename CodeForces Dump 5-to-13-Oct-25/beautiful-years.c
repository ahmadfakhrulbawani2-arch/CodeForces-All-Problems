#include <stdio.h>
#include <stdbool.h>

bool isDistinct(int y) {
    bool seen[10] = {false};
    while (y > 0) {
        int d = y % 10;
        if (seen[d]) return false;  // kalau digit udah pernah muncul
        seen[d] = true;
        y /= 10;
    }
    return true;
}

int main() {
    int y;
    scanf("%d", &y);
    while(1) {
        y++;
        if (isDistinct(y)) {
            printf("%d\n", y);
            break;
        }
    }
    return 0;
}
