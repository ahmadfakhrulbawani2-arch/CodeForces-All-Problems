#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    int maxId = 0, minId = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxId = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            minId = i;
        }
    }

    int count = maxId + (n - 1 - minId);
    if (maxId > minId) count--;
    printf("%d\n", count);
}
