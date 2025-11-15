#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][2];
    int count = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
        arr[i][0] += 2;
        if(arr[i][0] <= arr[i][1]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}