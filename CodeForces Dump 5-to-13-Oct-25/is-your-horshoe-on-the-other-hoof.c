#include <stdio.h>

int main() {
    long long arr[4];
    for(int i = 0; i < 4; i++) {
        scanf("%lld", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < 4; i++) {
        long long temp = arr[i];
        for(int j = 0; j < 4; j++) {
            if(j == i) {
                continue;
            }

            if(temp == arr[j]) {
                arr[j] = -1;
                continue;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(arr[i] != -1) {
            count++;
        }
    }

    count = 4 - count;

    printf("%d", count);
    return 0;
}