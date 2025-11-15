#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        int index = arr[i];
        arr2[index - 1] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}