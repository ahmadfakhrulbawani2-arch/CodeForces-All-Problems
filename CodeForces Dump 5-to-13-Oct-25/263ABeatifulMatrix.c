#include <stdio.h>

int main() {
    int matrix[5][5];

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int a, b;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(matrix[i][j] == 1) {
                a = i;
                b = j;
            }
        }
    }

    int ac = 2, bc = 2;
    int step1 = (ac > a) ? ac - a : a - ac;
    int step2 = (bc > b) ? bc - b : b - bc;
    int step = step1 + step2;
    
    printf("%d", step);
    return 0;
}