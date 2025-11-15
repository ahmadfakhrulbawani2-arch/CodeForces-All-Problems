#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    if(n == 1) {
        scanf("%d", &arr[0]);
        printf("0");
        return 0;
    } else {
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }
    int numAmz = 0, latestLo = arr[0];
    int latestHi = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > latestHi) {
            latestHi = arr[i];
            numAmz++;
        } else if(arr[i] < latestLo) {
            latestLo = arr[i];
            numAmz++;
        }
    }
    printf("%d\n", numAmz);
}