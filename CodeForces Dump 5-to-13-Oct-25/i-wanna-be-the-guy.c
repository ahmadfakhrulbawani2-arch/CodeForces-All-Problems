#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int litXY[2][n];
    int seen[100] = {0};
    int countLevel;
    for(int i = 0; i < 2; i++) {
        scanf("%d", &countLevel);
        for(int j = 0; j < countLevel; j++) {
            scanf("%d", &litXY[i][j]);
            int temp = litXY[i][j];
            if(seen[temp-1] == 0) {
                seen[temp-1] = 1;
            }
        }
    }

    int guy = 1;
    for(int i = 0; i < n; i++) {
        if(seen[i] == 0) {
            guy = 0;
            break;
        }
    }

    if(guy == 1) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}