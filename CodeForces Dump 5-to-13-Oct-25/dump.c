#include <stdio.h>
#include <stdbool.h>

bool findValueInMatrix(int rows, int cols, int matrix[rows][cols], int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                printf("Value %d found at position (%d, %d)\n", target, i, j);
                return true;
            }
        }
    }
    printf("Value %d not found in the matrix.\n", target);
    return false;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target = 5;

    findValueInMatrix(3, 3, matrix, target);

    return 0;
}
