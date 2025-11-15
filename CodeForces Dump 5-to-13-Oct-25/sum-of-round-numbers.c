#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    int res[t][10];
    int kthTerm[t];
    int tenth = 0;
    int k = 0;

    for(int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
        while(arr[i] > 0) {
            if(arr[i] % 10 != 0) {
                res[i][k] = arr[i] % 10;
                for(int j = 0; j < tenth; j++) {
                    res[i][k] *= 10;
                }
                k++;
            }
            arr[i] /= 10;
            tenth++;
        }
        kthTerm[i] = k;
        k = 0;
        tenth = 0;
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", kthTerm[i]);
        int k = kthTerm[i];
        for(int j = 0; j < k; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}