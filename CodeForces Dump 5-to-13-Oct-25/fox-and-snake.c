#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int k = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i % 2 != 0) {
                printf("#");
            } else {
                if(k % 2 == 0) {
                    if(j == 1) {
                        printf("#");
                    } else {
                        printf(".");
                    }
                } else {
                    if(j < m) {
                        printf(".");
                    } else {
                        printf("#");
                    }
                }
            }
        }
        if(i % 2 == 0) {
            k++;
        }
        printf("\n");
    }
    return 0;
}