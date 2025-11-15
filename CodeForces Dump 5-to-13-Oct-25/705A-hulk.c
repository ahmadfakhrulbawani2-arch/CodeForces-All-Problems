#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n == 1) {
        printf("I hate it\n");
    } else {
        for(int i = 1; i <= n; i++) {
            if(i == n) {
                if(i % 2 == 0) {
                    printf("I love it\n");
                    break;
                } else {
                    printf("I hate it\n");
                    break;
                }
            }
            if(i % 2 == 0) {
                printf("I love that ");
            } else {
                printf("I hate that ");
            }
        }
    }
    return 0;
}