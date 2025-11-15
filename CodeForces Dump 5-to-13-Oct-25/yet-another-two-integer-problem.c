#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int answer[t];

    for(int i = 0; i < t; i++) {
        answer[i] = 0;
        int a, b;
        scanf("%d %d", &a, &b);
        int lastMove = 0;
        if(a < b) {
            int diff = b - a;
            int add = 0;
            if(diff % 10 != 0) {
                add++;
            }
            add += diff / 10;
            answer[i] += add;
        } else {
            int diff = a - b;
            int add = 0;
            if(diff % 10 != 0) {
                add++;
            }
            add += diff / 10;
            answer[i] += add;
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", answer[i]);
    }
    return 0;
} 