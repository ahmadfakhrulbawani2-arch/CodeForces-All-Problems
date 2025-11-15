#include <stdio.h>
#include <math.h>

int main() {
    char s[40][81];
    int i, j;


    for(int i = 0; i < 40; i++) {
        for(int j = 0; j < 80; j++) {
            s[i][j] = ' ';
            s[i][80] = '\0';
        }
    }
    for(i = 0; i < 40; i++) {
        for(j = 0; j < 80; j++) {
            int dy = i - 20;
            int dx = j - 20;
            int radsquared = 18 * 18;
            int dist = dx*dx + dy*dy;
            if(fabs(dist - radsquared) <= 9) {
                int col_index = j * 2;
                if(col_index <= 80) {
                    s[i][col_index] = '*';
                }
            }
        }
    }

    for(int i = 0; i < 80; i++) {
        for(int j = 0; j < 80; j++) {
            printf("%c", s[i][j]);
        }
    }
    return 0;
}