#include <stdio.h>

int main() {
    int sereja = 0, dima = 0;
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int cards[n];
    for (int i = 0; i < n; i++) scanf("%d", &cards[i]);

    int l = 0, r = n - 1;
    int turn = 0; // 0 => Sereja, 1 => Dima

    while (l <= r) {
        int pick;
        if (cards[l] >= cards[r]) {
            pick = cards[l++];
        } else {
            pick = cards[r--];
        }

        if (turn % 2 == 0) sereja += pick;
        else dima += pick;

        turn++;
    }

    printf("%d %d\n", sereja, dima);
    return 0;
}
