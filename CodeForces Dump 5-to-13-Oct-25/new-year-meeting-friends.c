#include <stdio.h>

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    
    int terbesar, terkecil;
    if(x1 > x2) {
        if(x1 > x3) {
            terbesar = x1;
        } else {
            terbesar = x3;
        }
    } else {
        if(x2 > x3) {
            terbesar = x2;
        } else {
            terbesar = x3;
        }
    }

    if(x1 < x2) {
        if(x1 < x3) {
            terkecil = x1;
        } else {
            terkecil = x3;
        }
    } else {
        if(x2 < x3) {
            terkecil = x2;
        } else {
            terkecil = x3;
        }
    }

    int jarak = terbesar - terkecil;
    printf("%d\n", jarak);
    return 0;
}