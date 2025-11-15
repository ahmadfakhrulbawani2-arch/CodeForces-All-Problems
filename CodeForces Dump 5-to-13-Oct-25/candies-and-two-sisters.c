#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    long long arr[t];
    long long res[t];

    for(int i = 0; i < t; i++) {
        scanf("%lld", &arr[i]);
        if(arr[i] < 3) {
            res[i] = 0;
        } else {
            if(arr[i] % 2 == 0) {
                res[i] = arr[i] / 2;
                res[i] -= 1;
            } else {
                res[i] = arr[i];
                res[i] /= 2;
            }
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%lld", res[i]);
        printf("\n");
    }
}